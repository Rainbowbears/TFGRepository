// Fill out your copyright notice in the Description page of Project Settings.


#include "AIMeshGenerator.h"
#include "RoutePoint.h"
#include <Kismet/KismetSystemLibrary.h>

void AAIMeshGenerator::ClearRoutePoints()
{
	if (RoutePointInstances.Num() > 0) {
		for (int i = 0; i < RoutePointInstances.Num(); ++i) {
			RoutePointInstances[i]->Destroy();
			GetWorld()->DestroyActor(RoutePointInstances[i]);
		}

		RoutePointInstances.Empty();

	}

	if (RoutePoints.Num() > 0) {
		for (int i = 0; i < RoutePoints.Num(); ++i) {
			if (RoutePoints[i] != nullptr) {
				RoutePoints[i]->Destroy();
				GetWorld()->DestroyActor(RoutePoints[i]);
			}
		}
		RoutePoints.Empty();
	}

	widthCount = 0;
	countWidth = false;
	checkCount = true;

}

void AAIMeshGenerator::GenerateAIMesh()
{
	FVector Origin;
	FVector Extends;
	float PositionX, PositionY;
	AActor::GetActorBounds(false, Origin, Extends);
	if (LinePointCount != 0) {
		Offset = ((Extends.X * 2) / LinePointCount);
		InitialPosition = Origin - Extends;

		for (int i = 0; i < LinePointCount; ++i)
		{
			for (int j = 0; j < LinePointCount; ++j)
			{

				PositionX = InitialPosition.X + (Offset * i);
				PositionY = InitialPosition.Y + (Offset * j);
				if (CreateAIRoutePoint(PositionX, PositionY)) {
					if (countWidth)
						++widthCount;
				}
			}
			if (countWidth && checkCount) {
				countWidth = false;
				checkCount = false;
			}
		}

		TArray<AActor*> possibleMoves;

		int i = 0, j = 0;

		//Generate moves for route points
		for (; i < LinePointCount && i * LinePointCount + j < RoutePoints.Num(); ++i)
		{
			for (; j < LinePointCount && i * LinePointCount + j < RoutePoints.Num(); ++j)
			{
				if (RoutePoints[i * LinePointCount + j] != nullptr) {
					possibleMoves.Empty();
					//Right move
					if (i * LinePointCount + j < RoutePoints.Num() - 1) {
						if (RoutePoints[i * LinePointCount + j + 1] != nullptr && FVector3d::Dist2D(RoutePoints[i * LinePointCount + j]->GetActorLocation(), RoutePoints[i * LinePointCount + j + 1]->GetActorLocation()) <= 1000)
							possibleMoves.Add(RoutePoints[i * LinePointCount + j + 1]);
					}
					//Left move
					if (i * LinePointCount + j - 1 >= 0) {
						if (RoutePoints[i * LinePointCount + j - 1] != nullptr && FVector3d::Dist2D(RoutePoints[i * LinePointCount + j]->GetActorLocation(), RoutePoints[i * LinePointCount + j - 1]->GetActorLocation()) <= 1000)
							possibleMoves.Add(RoutePoints[i * LinePointCount + j - 1]);
					}
					//Top move
					if (i * LinePointCount + j + LinePointCount < RoutePoints.Num()) {
						if (RoutePoints[i * LinePointCount + j + LinePointCount] != nullptr && FVector3d::Dist2D(RoutePoints[i * LinePointCount + j]->GetActorLocation(), RoutePoints[i * LinePointCount + j + LinePointCount]->GetActorLocation()) <= 1000)
							possibleMoves.Add(RoutePoints[i * LinePointCount + j + LinePointCount]);
					}
					if (i * LinePointCount + j - LinePointCount >= 0) {
						if (RoutePoints[i * LinePointCount + j - LinePointCount] != nullptr && FVector3d::Dist2D(RoutePoints[i * LinePointCount + j]->GetActorLocation(), RoutePoints[i * LinePointCount + j - LinePointCount]->GetActorLocation()) <= 1000)
							possibleMoves.Add(RoutePoints[i * LinePointCount + j - LinePointCount]);
					}
					Cast<ARoutePoint>(RoutePoints[i * LinePointCount + j])->SetPossibleMoves(possibleMoves);
				}

			}
			j = 0;
		}
	}
}

bool AAIMeshGenerator::CreateAIRoutePoint(float PositionX, float PositionY) {
	FVector Start{ PositionX, PositionY, 300 };
	FVector End{ PositionX, PositionY, -999 };
	HitObjects.Empty();
	if (UKismetSystemLibrary::LineTraceMultiForObjects(GetWorld(), Start, End, ObjectType, false, IgnoreActors, EDrawDebugTrace::None, HitObjects, true, FLinearColor::Red, FLinearColor::Green, 205))
	{
		if (HitObjects.Num() > 0) {//Not null hit
			//Posibility of doing this foopable for multiple heights
			FHitResult HitObject = HitObjects[0];
			if (HitObject.GetActor() != nullptr && HitObject.GetComponent()->GetCollisionObjectType() == ECC_WorldStatic)
			{
				if (checkCount)
					countWidth = true;
				UE_LOG(LogTemp, Warning, TEXT("Some warning message"));
				FVector Location{ HitObject.ImpactPoint.X,HitObject.ImpactPoint.Y, HitObject.GetActor()->GetActorLocation().Z };
				FRotator Rotator = FRotator::ZeroRotator;
				FActorSpawnParameters SpawnParameters;
				ARoutePoint* instance = Cast<ARoutePoint>(GetWorld()->SpawnActor(SpawnClass.Get(), &Location, &Rotator, SpawnParameters));
				RoutePointInstances.Add(instance);
				RoutePoints.Add(instance);
				return true;
			}
		}
	}
	RoutePoints.Add(nullptr);
	return false;
}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RoutePoint.h"
#include "CoreMinimal.h"
#include "EditorUtilityActor.h"
#include "AIMeshGenerator.generated.h"

/**
 * 
 */
UCLASS()
class BABELSHIP_API AAIMeshGenerator : public AEditorUtilityActor
{
	GENERATED_BODY()

private:

	FVector InitialPosition;

	float Offset;

	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		int widthCount = 0;

	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		bool countWidth = false;

	bool checkCount = true;

	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectType;
	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		int LinePointCount;
	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AActor> SpawnClass;
	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		TArray<ARoutePoint*> RoutePointInstances;

	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		TArray<ARoutePoint*> RoutePoints;

	//Spawn use only variables
	TArray<FHitResult> HitObjects;
	TArray<AActor*, FDefaultAllocator> IgnoreActors;

public:

	UFUNCTION(BlueprintCallable)
		void GenerateAIMesh();

	UFUNCTION(BlueprintCallable)
		void ClearRoutePoints();


private:

	bool CreateAIRoutePoint(float PositionX, float PositionY);
	
};

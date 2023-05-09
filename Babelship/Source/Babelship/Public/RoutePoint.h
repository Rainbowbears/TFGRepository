// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "RoutePoint.generated.h"

/**
 * 
 */
UCLASS()
class BABELSHIP_API ARoutePoint : public ATargetPoint
{
	GENERATED_BODY()
private:

	UPROPERTY(EditInstanceOnly, meta = (AllowPrivateAccess = "true"))
		TArray<AActor*> possibleMoves;

public:

	void SetPossibleMoves(TArray<AActor*> moves) { possibleMoves = moves; }

	TArray<AActor*> GetPossibleMoves() {
		return possibleMoves;
	}
	
};

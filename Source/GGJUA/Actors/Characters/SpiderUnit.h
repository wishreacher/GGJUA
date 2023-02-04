// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseUnit.h"
#include "SpiderUnit.generated.h"

class AEnt;
/**
 * 
 */
UCLASS()
class GGJUA_API ASpiderUnit : public ABaseUnit
{
	GENERATED_BODY()

	ASpiderUnit();
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AEnt* EntReference = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* SphereComponent;
};

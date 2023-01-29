// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GGJUA/Interfaces/IPlacable.h"
#include "BaseTower.generated.h"

UCLASS()
class GGJUA_API ABaseTower : public APawn, public IIPlacable
{
	GENERATED_BODY()

public:
	ABaseTower();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

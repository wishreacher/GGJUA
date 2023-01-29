// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GGJUA/Interfaces/IPlacable.h"
#include "BaseUnit.generated.h"

UCLASS()
class GGJUA_API ABaseUnit : public ACharacter, public IIPlacable
{
	GENERATED_BODY()

public:
	ABaseUnit();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

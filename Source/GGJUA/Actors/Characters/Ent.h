// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ent.generated.h"

UCLASS()
class GGJUA_API AEnt : public ACharacter
{
	GENERATED_BODY()

public:
	AEnt();
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxHealth = 500.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentHealth;
};

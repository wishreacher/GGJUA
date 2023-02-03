// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Pawn.h"
#include "GGJUA/Interfaces/IPlacable.h"
#include "BaseTower.generated.h"

UCLASS()
class GGJUA_API ABaseTower : public APawn, public IIPlacable
{
	GENERATED_BODY()

public:
	ABaseTower();
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bIsBuilt = false;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* BuiltTreeMeshComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* NotBuiltTreeMeshComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBoxComponent* InteractionCollision = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundWave* BuiltSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundWave* DestroyedSound;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CostInMana = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CostInWater = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentHealth = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackRadius = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackPeriod = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackDamage = 20.f;
private:
	
};

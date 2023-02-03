// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GGJUA/Interfaces/IPlacable.h"
#include "BaseUnit.generated.h"

class USphereComponent;
UENUM(BlueprintType)
enum class ETeam : uint8
{
	Trees,
	Foes
};

class UAIPerceptionComponent;
UCLASS()
class GGJUA_API ABaseUnit : public ACharacter, public IIPlacable
{
	GENERATED_BODY()

public:
	ABaseUnit();

	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ETeam GetTeam(){return Team;}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAIPerceptionComponent* PerceptionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* DetectionSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETeam Team = ETeam::Trees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ManaCost = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterCost = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveSpeed = 600.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageAmount = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DetectionRadius = 500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackRadius = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* AttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* HitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* AttackSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* DeathSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* AppearanceSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* AttackTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetLocation;
	
protected:
	virtual void BeginPlay() override;


	
};

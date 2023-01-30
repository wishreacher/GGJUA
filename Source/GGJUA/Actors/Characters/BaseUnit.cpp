// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJUA/Actors/Characters/BaseUnit.h"

#include "Components/SphereComponent.h"
#include "Perception/AIPerceptionComponent.h"

ABaseUnit::ABaseUnit()
{
	PrimaryActorTick.bCanEverTick = true;
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
	DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
	DetectionSphere->SetSphereRadius(DetectionRadius);
	DetectionSphere->SetupAttachment(RootComponent);
}

void ABaseUnit::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
	
}

void ABaseUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


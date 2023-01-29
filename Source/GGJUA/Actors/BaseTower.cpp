// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJUA/Actors/BaseTower.h"

ABaseTower::ABaseTower()
{
	PrimaryActorTick.bCanEverTick = true;
	BuiltTreeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tree"));
	NotBuiltTreeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Basic Mesh"));
	InteractionCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Interaction Collision"));
	RootComponent = InteractionCollision;
	NotBuiltTreeMeshComponent->SetupAttachment(GetRootComponent());
	BuiltTreeMeshComponent->SetupAttachment(GetRootComponent());
}

void ABaseTower::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseTower::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


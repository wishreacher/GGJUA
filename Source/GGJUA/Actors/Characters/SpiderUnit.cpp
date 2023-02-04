// Fill out your copyright notice in the Description page of Project Settings.


#include "GGJUA/Actors/Characters/SpiderUnit.h"

#include "Components/SphereComponent.h"

ASpiderUnit::ASpiderUnit()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
}

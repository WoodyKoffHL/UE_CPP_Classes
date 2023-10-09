// Fill out your copyright notice in the Description page of Project Settings.


#include "CppLifeSystem.h"


// Sets default values for this component's properties
UCppLifeSystem::UCppLifeSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCppLifeSystem::BeginPlay()
{
	Super::BeginPlay();
	SetStatus();
	
}


// Called every frame
void UCppLifeSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	TickStatus(DeltaTime);
}

void UCppLifeSystem::ApplyDamage(float Damage, EDamageType Type)
{
	if (Death) return;
	if (Health - (Damage - (Damage * Edurance)) <= 0) {
		Health = 0;
		Death = true;
	}
	else {

		switch (Type)
			{
		case EDamageType::bite:
			Health = Health - (Damage - (Damage * Edurance));
		case EDamageType::shot:
			Health = Health - (Damage - (Damage * (Edurance / 2)));
		case EDamageType::explosion:
			Health = Health - Damage;
		case EDamageType::fire:
			Health = Health - (Damage - (Damage * Edurance / 3));
		case EDamageType::radiation:
			Health = Health - (Damage - (Damage * NuklearEdurance));
		default:
			break;
			}
		
	}
}



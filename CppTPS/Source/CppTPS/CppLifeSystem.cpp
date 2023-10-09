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
	if (isDead) return;
	
		switch (Type)
			{
		case EDamageType::bite:
			if (Health - (Damage - (Damage * biteEdurance)) <= 0) {
				Death();
			}
			Health = Health - (Damage - (Damage * biteEdurance));
		case EDamageType::shot:
			if (Health - (Damage - (Damage * shotEdurance)) <= 0) {
				Death();
			}
			Health = Health - (Damage - (Damage * shotEdurance));
		case EDamageType::explosion:
			if (Health - (Damage - (Damage * explosionEdurance)) <= 0) {
				Death();
			}
			Health = Health - (Damage - (Damage * explosionEdurance));
		case EDamageType::fire:
			if (Health - (Damage - (Damage * fireEdurance)) <= 0) {
				Death();
			}
			Health = Health - (Damage - (Damage * fireEdurance));
		case EDamageType::cold:
			if (Health - (Damage - (Damage * coldEdurance)) <= 0) {
				Death();
			}
			Health = Health - (Damage - (Damage * coldEdurance));
		case EDamageType::radiation:
			if (Health - (Damage - (Damage * NuklearEdurance)) <= 0) {
				Death();
			}
			Health = Health - (Damage - (Damage * NuklearEdurance));
		default:
			break;
			}
		
	
}

void UCppLifeSystem::Death()
{
	Health = 0;
	isDead = true;
	OnDeath();
}



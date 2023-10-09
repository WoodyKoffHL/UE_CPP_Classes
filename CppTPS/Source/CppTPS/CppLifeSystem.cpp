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

	// ...
	
}


// Called every frame
void UCppLifeSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCppLifeSystem::ApplyDamage(float Damage)
{
	if (Death) return;
	if (Health - (Damage - (Damage * Edurance)) <= 0) {
		Health = 0;
		Death = true;
	}
	else {
		Health = Health - (Damage - (Damage * Edurance));
	}
}


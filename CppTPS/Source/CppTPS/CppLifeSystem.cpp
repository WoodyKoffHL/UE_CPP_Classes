// Fill out your copyright notice in the Description page of Project Settings.


#include "CppLifeSystem.h"
#include "Math/UnrealMathUtility.h"


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

void UCppLifeSystem::Fatigue(bool Moving)
{
	float fTired = TiredRatio * 100;
	if (Moving) {
		fTired = fTired * -1;
	}
	float seconds = VitalityRatio;
	if (Vitality <= 50.5f || Moving) {
		seconds = seconds * 2;
	}
	else if (Vitality <= 10.1f || Moving) {
		seconds = seconds * 4;
	}
	
	FatigueCall(fTired, seconds);
}

void UCppLifeSystem::Death()
{
	Health = 0;
	isDead = true;
	OnDeath();
}

bool UCppLifeSystem::AddStat(float Value, EStatisType Type)
{
	bool result = false;
	float total;

	if (Value == 0) {
		return false;
	}
	else if (Value < 0) {
		if (Value < -100) {
			total = -100;
		}
		else {
			total = Value;
		}
	}
	else if (Value > 0) {
		if (Value > 100) {
			total = 100;
		}
		else {
			total = Value;
		}
	}

	switch (Type) {
	case EStatisType::Health:
		if ((Health + total) >= 100) {
			Health = 100;
		}
		else if ((Health + total) <= -100){
			Death();
		} else{
			Health = Health + total;
		} return true;
	case EStatisType::Vitality:
		if ((Vitality + total) >= 100) {
			Vitality = 100;
		}
		else if ((Vitality + total) <= -100) {
			Vitality = 0;
		}
		else {
			Vitality = Vitality + total;
		} return true;
	case EStatisType::Thirst:
		if ((Thirst + total) >= 100) {
			Thirst = 100;
		}
		else if ((Thirst + total) <= -100) {
			Thirst = 0;
		}
		else {
			Thirst = Thirst + total;
		} return true;
	case EStatisType::Hunger:
		if ((Hunger + total) >= 100) {
			Hunger = 100;
		}
		else if ((Hunger + total) <= -100) {
			Hunger = 0;
		}
		else {
			Hunger = Hunger + total;
		} return true;
	case EStatisType::Radiation:
		if ((Radiation + total) >= 100) {
			Radiation = 100;
		}
		else if ((Radiation + total) <= -100) {
			Radiation = 0;
		}
		else {
			Radiation = Radiation + total;
		} return true;
	}

	return true;
}



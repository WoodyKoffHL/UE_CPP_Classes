// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CppLifeSystem.generated.h"


UENUM(BlueprintType)
enum class EDamageType : uint8 {
	bite,
	shot,
	explosion,
	fire,
	cold,
	radiation
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPTPS_API UCppLifeSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCppLifeSystem();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Health = 0.0f; // Здоровье

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Vitality = 0.0f; // Жизнеспособность - чем больше, тем меньше усталость
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Thirst = 0.0f; // Жажда

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Hunger = 0.0f; // Голод

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Radiation = 0.0f; // Радиация

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	bool isDead = true; // Смерть

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	bool Tired = true; // Усталость, временная bool, отключается через 15 секунд

	// Переменные защиты от различного типа урона

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float biteEdurance = 0.0f; // Процент защиты от укуса

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float shotEdurance = 0.0f; // Процент защиты от выстрелов

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float explosionEdurance = 0.0f; // Процент защиты от взрыва

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float fireEdurance = 0.0f; // Процент защиты от жары и огня

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float coldEdurance = 0.0f; // Процент защиты от холода

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float NuklearEdurance = 0.0f; // Процент защиты от радиации


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ApplyDamage(float Damage, EDamageType Type);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnDeath();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetStatus();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TickStatus(float DeltaTime);

private:

	void Death();

};

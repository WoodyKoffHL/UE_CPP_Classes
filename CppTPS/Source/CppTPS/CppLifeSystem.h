// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CppLifeSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPTPS_API UCppLifeSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCppLifeSystem();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Health = 0.0f; // ��������

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Vitality = 0.0f; // ���������������� - ��� ������, ��� ������ ���������

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Edurance = 0.0f; // ������� ������
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Thirst = 0.0f; // �����

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Hunger = 0.0f; // �����

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	float Radiation = 0.0f; // ��������

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Stats")
	bool Death = true; // ������

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ApplyDamage(float Damage);
};

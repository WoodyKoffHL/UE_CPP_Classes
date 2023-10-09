// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Datatable.h"
#include "QuestCondition.h"
#include "Engine/DataTable.h"
#include "QuestComponent.generated.h"

#pragma region UENUMS
UENUM(BlueprintType)
enum class EOwnerType : uint8 {
	NPC, Player, Object
};
UENUM(BlueprintType)
enum class EQuestStat : uint8 {
	Available, NotAvailable, Taken, Completed, Success
};
#pragma endregion

#pragma region USTRUCTS
USTRUCT(BlueprintType) struct FQuestStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	TSubclassOf<UQuestCondition> Quest;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	bool Success;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	bool Complette;

};
#pragma endregion


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WOODYQUESTS_API UQuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQuestComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

#pragma region Public Vars
public:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category="Quests")
	EOwnerType OwnerType = EOwnerType::Object;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quests")
	TArray<FQuestStruct> AllQuests;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quests")
	TArray<FQuestStruct> CompletteQuests;

#pragma endregion

#pragma region Privte Vars
private:

#pragma endregion

#pragma region Public Functions
public:

	UFUNCTION(BlueprintCallable)
	bool HaveQuest(TSubclassOf<UQuestCondition> Qst);

	UFUNCTION(BlueprintCallable)
	void CompletteQuest(TSubclassOf<UQuestCondition> Qst);
#pragma endregion

#pragma region Private Functions
private:
#pragma endregion

};


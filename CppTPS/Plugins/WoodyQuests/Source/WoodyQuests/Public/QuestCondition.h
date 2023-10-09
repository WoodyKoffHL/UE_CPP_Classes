// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestCondition.generated.h"

UCLASS(Blueprintable)
class WOODYQUESTS_API UQuestCondition : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UQuestCondition();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void QuestComplette();

	// QUEST PARAMS
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quest")
	int32 id;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quest")
	FString QuestName;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quest")
	FText Description;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quest")
	AActor* QuestOwner;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quest")
	FText ConditionsText;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quest")
	bool Success;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Quest")
	bool Complette;
};

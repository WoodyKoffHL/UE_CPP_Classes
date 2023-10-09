// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestComponent.h"

// Sets default values for this component's properties
UQuestComponent::UQuestComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UQuestComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UQuestComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UQuestComponent::HaveQuest(TSubclassOf<UQuestCondition> Qst)
{
	
	bool HaveQuest = false;
	for (int32 i = 0; i != AllQuests.Num(); i++) {
		if (AllQuests.IsValidIndex(i)) {
			if (AllQuests[i].Quest == Qst) return true;
		} 
	}
	return HaveQuest;
}



void UQuestComponent::CompletteQuest(TSubclassOf<UQuestCondition> Qst)
{
	for (int32 i = 0; i != AllQuests.Num(); i++) {
		if (AllQuests.IsValidIndex(i)) {
			if (AllQuests[i].Quest == Qst || AllQuests[i].Success) {
				AllQuests.RemoveAt(i);
				FQuestStruct NewStruct;
				NewStruct.Quest = Qst;
				NewStruct.Complette = true;
				CompletteQuests.Add(NewStruct);
			}
		}
	}
}


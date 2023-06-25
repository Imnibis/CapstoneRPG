// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "QuestObjective.h"
#include "Quest.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTHOOKS_API UQuest : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag QuestTag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Name;
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	TArray<UQuestObjective*> Objectives;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
	TArray<UQuestReward*> Rewards;
};

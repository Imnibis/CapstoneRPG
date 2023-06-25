// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestReward.h"
#include "UObject/NoExportTypes.h"
#include "QuestObjective.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class PROJECTHOOKS_API UQuestObjective : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag ObjectiveTag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int Amount;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTagContainer ObjectiveLocationTags;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced)
	TArray<UQuestReward*> Rewards;
};

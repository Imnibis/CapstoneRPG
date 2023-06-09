// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
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
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite)
	TArray<UQuestObjective*> Objectives;
};

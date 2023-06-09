// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestObjective.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, EditInlineNew)
class PROJECTHOOKS_API UQuestObjective : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Description;
};

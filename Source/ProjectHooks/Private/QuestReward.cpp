// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestReward.h"

void UQuestReward::OnReward_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No reward set, skipping."));
}
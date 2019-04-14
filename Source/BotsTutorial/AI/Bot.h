// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/TargetPoint.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Bot.generated.h"

UCLASS()
class BOTSTUTORIAL_API ABot : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Targets for Bot to patrol
	UPROPERTY(EditAnywhere, Category = "AI")
	TArray<ATargetPoint*> BotTargetPoints;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// BTree class to be used in AICotroller for this Bot
	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* BehaviorTree;

	int GetNextTargetIndex(int CurrentIndex);

	ATargetPoint* GetTargetPointByIndex(int i) { return BotTargetPoints.Num() > i && i >= 0 ? BotTargetPoints[i] : nullptr; };
};

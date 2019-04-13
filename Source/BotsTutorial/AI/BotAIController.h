// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackBoardComponent.h"
#include "BotAIController.generated.h"

/**
 * 
 */
UCLASS()
class BOTSTUTORIAL_API ABotAIController : public AAIController
{
	GENERATED_BODY()

protected:

	// AI components
	UBehaviorTreeComponent* BehaviorTreeComponent;
	UBlackboardComponent* BlackboardComponent;

	// Blackboard key name to store the location where Bot should move
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	FName LocationToGoKey;

	/* Posses is executed when the character we want to control is spawned.
	Inside this function, we initialize the blackboard and start the behavior tree */
	virtual void OnPossess(APawn* Pawn) override;

public:
	ABotAIController();
};

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

	/*I use the AActor class as the Template class so I can use the GetAllActorsOfClass function.
	However, in this collection I'm going to store all the Available ABotTargetPoint instances.*/
	TArray<ATargetPoint*> BotTargetPoints;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// BTree class to be used in AICotroller for this Bot
	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* BehaviorTree;
};

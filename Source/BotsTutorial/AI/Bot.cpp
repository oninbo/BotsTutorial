// Fill out your copyright notice in the Description page of Project Settings.


#include "Bot.h"

// Sets default values
ABot::ABot()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ABot::GetNextTargetIndex(int CurrentIndex)
{
	int NewIndex = ++CurrentIndex;
	if (CurrentIndex > BotTargetPoints.Num() - 1)
	{
		NewIndex = 0;
	}
	return NewIndex;
}

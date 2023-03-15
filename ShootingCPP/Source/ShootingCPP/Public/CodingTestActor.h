// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodingTestActor.generated.h"

UCLASS()
class SHOOTINGCPP_API ACodingTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACodingTestActor();	//생성자

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

// private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 number1 = 10;

// 접근 한정자는 한 번 선언하면 다른 접근 한정자를 만날 때 까지 그 아래에 있는 모든 변수나 함수에 적용된다.
// public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 number2 = 30;

	FString name = "Park Man Jin";
	
	UPROPERTY(EditInstanceOnly)
	FString name2 = TEXT("박만진");
	
	UPROPERTY(EditAnywhere)
	bool isReady = true;
	bool isFinished = false;

	//더하기 함수 선언
	UFUNCTION(BlueprintCallable)
	int32 CustomAdd(int32 num1, int32 num2);

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AccessTest.generated.h"

UCLASS()
class SHOOTINGCPP_API AAccessTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAccessTest();	//생성자

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	UPROPERTY(EditAnywhere)
		class ACodingTestActor* testPointer;	//Class forward delaration, 클래스 전방 선언. include로 다른 헤더 파일을 포함하면 빌드에 시간이 오래 걸리기 때문에...

	int32 number;			// 일반 변수
	int32* numPointer;		// 포인터 변수

	void AddPrint(int32 num1, int32 num2, int32 result);
	void PointerAddPrint(int32 num1, int32 num2, int32* result); // result 매개변수를 포인터 변수로 선언했다는 것에 주목
};

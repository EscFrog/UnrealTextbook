// Fill out your copyright notice in the Description page of Project Settings.


#include "CodingTestActor.h"

// Sets default values
ACodingTestActor::ACodingTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodingTestActor::BeginPlay()
{
	Super::BeginPlay();

	// print Hello World
	// UE_LOG(LogTemp, Warning, TEXT("Hello World"));;
	//UE_LOG(LogTemp, Warning, TEXT("%d"), number1);
	//UE_LOG(LogTemp, Warning, TEXT("%.2f"), number2);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *name);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *name2);
	//Add �Լ��� �̿��ؼ� number1�� number2 ������ ���� ���Ѵ�.
	int32 result = CustomAdd(number1, number2);

	//�Լ� ����� ��ȯ�� result ���� ����Ѵ�.
	UE_LOG(LogTemp, Warning, TEXT("%d"), result);

	
}

// Called every frame
void ACodingTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACodingTestActor::CustomAdd(int32 num1, int32 num2)
{
	int32 result = num1 + num2;
	return result;
}

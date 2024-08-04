#pragma once

#include "TestedActor.generated.h"

UCLASS(Blueprintable)
class ATestedActor : public AActor
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	FVector GetActorPosition();

protected:
	UPROPERTY(EditAnywhere, Category="Test")
	AActor* actor;
};

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

class UFloatingPawnMovement;

UCLASS()
class ABaseShip : public ABaseGameAgent
{
    GENERATED_BODY()

public:
    ABaseShip();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UFloatingPawnMovement* FloatingPawnMovement = nullptr;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};

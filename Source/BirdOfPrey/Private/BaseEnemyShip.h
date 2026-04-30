#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

class AAIController;

UCLASS()
class ABaseEnemyShip : public ABaseShip
{
    GENERATED_BODY()

public:
    ABaseEnemyShip();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    AAIController* ShipAIController = nullptr;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Move();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};

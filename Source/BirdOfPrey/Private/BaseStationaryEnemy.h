#pragma once

#include "CoreMinimal.h"
#include "BaseEnemyShip.h"
#include "BaseStationaryEnemy.generated.h"

UCLASS()
class ABaseStationaryEnemy : public ABaseEnemyShip
{
    GENERATED_BODY()

public:
    ABaseStationaryEnemy();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

class UAudioComponent;

UCLASS()
class APlayerShip : public ABaseShip
{
    GENERATED_BODY()

public:
    APlayerShip();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float HoverPitch = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bDiedWhileFiring = false;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void FireWeapon();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ClampToCameraBounds();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector2D GetShipAxisAdjustment(float AxisValue) const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector GetShipConstantVelocity() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    int32 GetPlayerControllerID() const;
};

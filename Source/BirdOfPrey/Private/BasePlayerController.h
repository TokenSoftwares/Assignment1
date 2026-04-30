#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

UCLASS()
class ABasePlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ABasePlayerController();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bDiedWhileFiring = false;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnPlayerDeath(AController* Killer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CalcScreenDimensions();
};

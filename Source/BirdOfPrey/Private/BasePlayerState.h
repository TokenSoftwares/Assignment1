#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

UCLASS()
class ABasePlayerState : public APlayerState
{
    GENERATED_BODY()

public:
    ABasePlayerState();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    int32 RemainingLives = 3;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float PlayerScore = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float TimeOfLastDeath = 0.0f;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AddScore(float Amount);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ConsumeLife();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasRemainingLives() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};

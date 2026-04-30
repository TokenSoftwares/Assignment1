#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

UCLASS()
class ABaseGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABaseGameMode();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float MaxRelativePlayerOffset = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsGameOverScreen = false;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AddScore(int32 PlayerControllerID, float Amount);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ConsumeLife(int32 PlayerControllerID);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool HasRemainingLives(int32 PlayerControllerID) const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void EndGame(int32 KillerPlayerControllerID);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FVector2D CalcScreenDimensions() const;
};

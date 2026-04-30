#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

class UAnimInstance;
class USkeletalMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSAgentInfo
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FText Name;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<AActor> BaseWeaponType;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USkeletalMesh* SkeletalMesh = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UAnimInstance* AnimInstance = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UTexture2D* Image = nullptr;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAgentInfoChange, int32, PlayerControllerID, FSAgentInfo, AgentInfo);

UCLASS()
class UBaseGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TArray<FSAgentInfo> PlayerAgentInfo;

    UPROPERTY(BlueprintAssignable, Category = "BirdOfPrey")
    FOnAgentInfoChange OnAgentInfoChange;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo AgentInfo);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FSAgentInfo GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& Result) const;
};

#include "BaseGameMode.h"

ABaseGameMode::ABaseGameMode()
{
}

void ABaseGameMode::AddScore(int32 PlayerControllerID, float Amount)
{
}

void ABaseGameMode::ConsumeLife(int32 PlayerControllerID)
{
}

bool ABaseGameMode::HasRemainingLives(int32 PlayerControllerID) const
{
    return false;
}

void ABaseGameMode::EndGame(int32 KillerPlayerControllerID)
{
}

FVector2D ABaseGameMode::CalcScreenDimensions() const
{
    return FVector2D::ZeroVector;
}

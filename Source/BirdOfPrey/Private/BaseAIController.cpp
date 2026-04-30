#include "BaseAIController.h"

ABaseAIController::ABaseAIController()
{
}

AActor* ABaseAIController::SelectTarget() const
{
    return nullptr;
}

void ABaseAIController::AimAt(const FVector& AimTarget)
{
}

void ABaseAIController::UpdateAim(float DeltaSeconds)
{
}

bool ABaseAIController::ShouldStartFire() const
{
    return false;
}

bool ABaseAIController::ShouldStopFire() const
{
    return false;
}

void ABaseAIController::CheckFire(float DeltaSeconds)
{
}

void ABaseAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
}

void ABaseAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

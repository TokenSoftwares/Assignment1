#include "BasePowerup.h"

ABasePowerup::ABasePowerup()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ABasePowerup::Apply(APlayerShip* PlayerShip)
{
}

void ABasePowerup::PlayEffects()
{
}

void ABasePowerup::Reset()
{
}

#include "PlayerShip.h"

APlayerShip::APlayerShip()
{
}

void APlayerShip::FireWeapon()
{
}

void APlayerShip::ClampToCameraBounds()
{
}

FVector2D APlayerShip::GetShipAxisAdjustment(float AxisValue) const
{
    return FVector2D::ZeroVector;
}

FVector APlayerShip::GetShipConstantVelocity() const
{
    return FVector::ZeroVector;
}

int32 APlayerShip::GetPlayerControllerID() const
{
    return 0;
}

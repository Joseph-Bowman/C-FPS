#include "FPS/UFPS_CharacterMovementComponent.h"

void UUFPS_CharacterMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime)) {
		return;
	}

	FVector DesiredMovementThisFrame = ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * 150.0f;
	if (!DesiredMovementThisFrame.IsNearlyZero()) {
		FHitResult hit;
		SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent->GetComponentRotation(), true, hit);

		if (hit.IsValidBlockingHit()) {
			SlideAlongSurface(DesiredMovementThisFrame, 1.0f - hit.Time, hit.Normal, hit);
		}
	}
}

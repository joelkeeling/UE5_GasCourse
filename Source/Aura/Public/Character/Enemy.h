// Copyright Joel Keeling

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/HighlightInterface.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemy : public AAuraCharacterBase, public IHighlightInterface
{
	GENERATED_BODY()

public:
	AEnemy();
	/* Enemy Interface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/* end Enemy Interface */

protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
};

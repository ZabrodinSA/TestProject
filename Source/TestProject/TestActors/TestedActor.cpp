#include "TestedActor.h"

FVector ATestedActor::GetActorPosition()
{
	if (!actor)
	{
		return  actor->GetTransform().GetLocation();
	}

	
	return FVector();
}

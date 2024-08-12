#include "EngineUtils.h"
#include "TestedActor.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationCommon.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(MySimpleTest, "TestProject.TestProject.TestActors.MySimpleTest",
                                 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool MySimpleTest::RunTest(const FString& Parameters)
{
	AutomationOpenMap("/Game/ThirdPerson/Maps/ThirdPersonMap");
	UWorld* world = nullptr;
	if (GEngine)
	{
		if (FWorldContext* WorldContext = GEngine->GetWorldContextFromPIEInstance(0))
		{
			world = WorldContext->World();
		}
	}
	if (!world) return false;
	
	for (FActorIterator It(world); It; ++It)
	{
		AActor* actor = *It;
		if (ATestedActor* testedActor = Cast<ATestedActor>(actor))
		{
			UE_LOG(LogTemp, Warning, TEXT("The tested actor position: %s"), *(testedActor->GetActorPosition().ToString()));
		}
	}
	return true;
}

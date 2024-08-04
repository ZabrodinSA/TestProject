#include "TestedActor.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(MySimpleTest, "TestProject.TestProject.TestActors.MySimpleTest",
                                 EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool MySimpleTest::RunTest(const FString& Parameters)
{
	auto testedActor = NewObject<ATestedActor>();
	return true;
}

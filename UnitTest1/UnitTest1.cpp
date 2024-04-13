#include "pch.h"
#include "CppUnitTest.h"
#include "..\DelMeRepoAttend\DelMeRepoAttend.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto val  = testMe(5);
			Assert::AreEqual(10, val);

		}
	};
}

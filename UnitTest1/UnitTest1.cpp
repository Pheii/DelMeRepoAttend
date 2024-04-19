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
			num1 = 2;
			num2 = 3;
			sum = num1 + num2;
			auto val  = testMe(sum);
			Assert::AreEqual(10, val);

		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const char* str = "abcdefg";
			Assert::AreEqual(CountThirdDots(str), 0);
		}
		TEST_METHOD(TestMethod4)
		{
			const char* str = "ab..c..defg";
			Assert::AreEqual(CountThirdDots(str), 1);
		}

	};
}


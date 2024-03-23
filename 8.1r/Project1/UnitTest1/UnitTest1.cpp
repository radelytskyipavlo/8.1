#include "pch.h" 
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace YourProjectTest
{
	TEST_CLASS(YourTestClass)
	{
	public:

		TEST_METHOD(TestCountThirdDots)
		{
			char str[] = "a.b.c.d.e.f.g."; 
			Assert::AreEqual(0, CountThirdDots(str, 0, 0)); 
		}

		TEST_METHOD(TestReplaceEveryFourth)
		{
			char str[] = "1234567890123456";
			ReplaceEveryFourth(str, 0);
			Assert::AreEqual("123.567.901.345.", str); 
		}
	};
}

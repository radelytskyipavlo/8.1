#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(CountThirdDotsTest)
    {
    public:
        TEST_METHOD(TestCountThirdDots)
        {

            string testString = "one..two...three....four.....five......";

            int expectedCount = 5;

            int actualCount = CountThirdDots(testString);

            Assert::AreEqual(expectedCount, actualCount);
        }
    };
}


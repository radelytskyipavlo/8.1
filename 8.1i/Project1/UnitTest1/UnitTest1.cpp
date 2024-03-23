#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(ReplaceEveryFourthTest)
    {
    public:

        TEST_METHOD(ShortInput)
        {
            char str[] = "abcd";
            ReplaceEveryFourth(str);
            Assert::AreEqual("abc.", str);
        }
        TEST_METHOD(EmptyInput)
        {
            char str[] = "";
            ReplaceEveryFourth(str);
            Assert::AreEqual("", str);
        }
    };
}

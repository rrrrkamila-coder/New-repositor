#include "pch.h"
#include "CppUnitTest.h"
#define UNIT_TESTING
#include "../PowerRootOperations/PowerRootOperations.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PowerRootOperationsTests
{
    TEST_CLASS(PowerRootOperationsTests)
    {
    public:
        // Позитивные тесты
        TEST_METHOD(Power_TwoToTen_Returns1024)
        {
            double actual = PowerRootOperations::power(2, 10);
            Assert::AreEqual(1024.0, actual, 0.0001);
        }

        TEST_METHOD(NthRoot_CubeRootOf27_Returns3)
        {
            double actual = PowerRootOperations::nthRoot(27, 3);
            Assert::AreEqual(3.0, actual, 0.0001);
        }

        // Негативные тесты
        TEST_METHOD(Power_ZeroToNegative_Throws)
        {
            Assert::ExpectException<std::invalid_argument>([]() { PowerRootOperations::power(0, -1); });
        }

        TEST_METHOD(NthRoot_EvenRootOfNegative_Throws)
        {
            Assert::ExpectException<std::invalid_argument>([]() { PowerRootOperations::nthRoot(-16, 2); });
        }
    };
}

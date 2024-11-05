#include "pch.h"
#include "CppUnitTest.h"
#include "../9.2!!!!!!!!!!!!!!!/calculations.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
    {
    public:

        TEST_METHOD(TestMethod_Condition_5_LessThan_Z_LessThan_10)
        {
            // 5 < z < 10
            int x = 4;
            int z = 7;
            int expected = MAX(x, z) * MIN(x + z, x * z); 
            int result = CALCULATE_W(x, z);
            Assert::AreEqual(expected, result, L"Помилка у виразі для 5 < z < 10");
        }

        TEST_METHOD(TestMethod_Condition_Z_LessOrEqual_5_Or_Z_GreaterOrEqual_10)
        {
            int x = 4;
            int z = 10;
            int expected = SQUARE(MIN(ABS(x - z), z)); 
            int result = CALCULATE_W(x, z);
            Assert::AreEqual(expected, result, L"Помилка у виразі для z <= 5 або z >= 10");
        }

        TEST_METHOD(TestMethod_Condition_Z_LessOrEqual_5)
        {
            // z <= 5
            int x = 10;
            int z = 3;
            int expected = SQUARE(MIN(ABS(x - z), z)); 
            int result = CALCULATE_W(x, z);
            Assert::AreEqual(expected, result, L"Помилка у виразі для z <= 5");
        }

    };
}

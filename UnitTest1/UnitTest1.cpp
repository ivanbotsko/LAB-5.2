#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../PR 5.2/PR 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestSFunction)
        {
            // Arrange
            double x = 0.5; 
            double eps = 1e-6; 
            int n = 0; 
            double s = 0; 
            double expectedS = log1p(x);

            
            S(x, eps, n, s);

            
            Assert::AreEqual(s, expectedS, 1e-6); 
        }
    };
}

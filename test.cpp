#include "MyMathLib.h"
#include "operations.h"
#include "factorial.h"
#include <gtest/gtest.h>

TEST(MathTestCase, MathTestSqrt9)
{
	ASSERT_EQ(3, mySqrt(9));
}

TEST(OperationsTest, Sum) {
    EXPECT_EQ(sumar(2, 3), 5);
}

TEST(OperationsTest, Subtraction) {
    EXPECT_EQ(restar(5, 2), 3);
}

TEST(OperationsTest, Multiplication) {
    EXPECT_EQ(multiplicar(5, 3), 15);
}

TEST(OperationsTest, Division) {
    EXPECT_DOUBLE_EQ(dividir(12, 2), 6);
}

TEST(factorial, Factorial) {
    EXPECT_EQ(factorial(5), 120);
}

TEST(factorial, Combination) {
    EXPECT_EQ(combinacion(5, 3), 10);
}
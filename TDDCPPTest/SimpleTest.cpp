#include "stdafx.h"
#include <Calculator.h>

Calculator calculator;

TEST(CalculatorTest, Add) {
	EXPECT_EQ(calculator.add(1, 3), 4);
}

TEST(CalculatorTest, Minus) {
	EXPECT_EQ(calculator.minus(1, 3), -2);
}
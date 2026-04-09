#include "fact.h"
#include "gtest/gtest.h"

TEST(FactorialTest, Demo) {
  	//This is just a demo, replace this with better tests!
	EXPECT_EQ(1, Factorial(0));
}

TEST(FactorialTest, DemoFail) {
	//This test should fail!
	EXPECT_EQ(2, Factorial(2));
}


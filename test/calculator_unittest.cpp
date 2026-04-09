#include "Calculator.h"
// #include "fact.h"

#include "gtest/gtest.h"
#include <iostream>

class CalculorTest : public testing :: Test {
    protected:
        CalculorTest(){

        }

        void SetUp() {
            calc = new Calculator();
            std::cout << "setup " << calc << std::endl;
        }

        void TearDown() {
            std::cout << "tear down " << calc << std::endl;
            // calc = new Calculator();
            delete calc;
        }

        Calculator* calc;
};

TEST_F(CalculorTest, AddWorks) {
    EXPECT_EQ(calc->Add(1,2),3);
}


TEST_F(CalculorTest, SubtractWorks) {
    EXPECT_EQ(calc->Subtract(1,2),-1);
}
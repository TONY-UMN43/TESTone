#include <iostream>
#include "fact.h"
#include "Calculator.h"

int main() {
    std::cout << Factorial(12) << std::endl;

    Calculator calc;
    std::cout << calc.Add(5, 2) << std::endl;
    std::cout << calc.Subtract(5, 2) << std::endl;
    return 0;
}
#include "fact.h"

int Factorial(int x) {
    // if (x <= 1) {
    if (x == 0){
        return 1;
    }
    // return Factorial(x-1)+Factorial(x-2);
    return x*Factorial(x-1);
}
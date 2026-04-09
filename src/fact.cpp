#include "fact.h"

int fact(int x) {
    if (x <= 1) {
        return 1;
    }
    return fact(x-1)+fact(x-2);
}
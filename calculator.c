#include <stdio.h>

#include "calculator.h"

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        printf("Cannot divide by 0");
        return 0;
    }
    return x * 1.0 / y;
}

#include <assert.h>

#include "calculator.h"

void test_add() {
    assert(add(1, 2) == 3.0);
    assert(add(1.0, 2.0) == 3.0);
    assert(add(0, 2.0) == 2.0);
    assert(add(2.0, 0) == 2.0);
    assert(add(-4, 2.0) == -2.0);
}

void test_subtract() {
    assert(subtract(1, 2) == -1.0);
    assert(subtract(2, 1) == 1.0);
    assert(subtract(1.0, 2.0) == -1.0);
    assert(subtract(0, 2.0) == -2.0);
    assert(subtract(2.0, 0) == 2.0);
    assert(subtract(-4, 2.0) == -6.0);
}

void test_multiply() {
    assert(multiply(1, 2) == 2.0);
    assert(multiply(1.0, 2.0) == 2.0);
    assert(multiply(0, 2.0) == 0.0);
    assert(multiply(2.0, 0) == 0.0);
    assert(multiply(-4, 2.0) == -8.0);
}

void test_divide() {
    assert(divide(1, 2) == 0.5);
    assert(divide(1.0, 2.0) == 0.5);
    assert(divide(0, 2.0) == 0);
    assert(divide(-4, 2.0) == -2.0);
    // assert(divide(2.0, 0) == 0.0);
}

int main() {
    test_add();
    test_subtract();
    test_multiply();
    test_divide();
}

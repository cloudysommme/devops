#include "MyClass.h"
#include <cmath>

double MyClass::FuncA(double x, int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += sin(x * i);  // Сума перших n елементів послідовності
    }
    return sum;
}


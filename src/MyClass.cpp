#include "MyClass.h"
#include <cmath>
double MyClass::FuncA(double x, int n) {
    double result = 0.0;
    for (int k = 1; k <= n; ++k) {
        double term = (2.0 * std::pow(x, 2*k-1)) / ((2*k) * (2*k-1));
        result += term;
    }
    return result;
}


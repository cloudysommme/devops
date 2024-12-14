#include "MyClass.h"
#include <cmath> // Для std::pow

double MyClass::FuncA(double x, int n) {
    double result = 0.0;
    int terms = 3; // Перші 3 елементи
    for (int k = 1; k <= terms; ++k) {
        double term = (2.0 * std::pow(x, 2*k-1)) / ((2*k) * (2*k-1));
        result += term;
    }
    return result;
}

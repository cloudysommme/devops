#include <iostream>
#include "MyClass.h"

int main() {
    MyClass obj;
    double x = 1.0;
    int n = 3;
    double result = obj.FuncA(x, n);
    std::cout << "The result of FuncA(" << x << ") for the first 3 elements is: " << result << std::endl;

    return 0;
}


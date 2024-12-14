#include <iostream>
#include "MyClass.h"

int main() {
    MyClass obj;
    int n = 5; // Кількість елементів ряду
    double result = obj.FuncA(0, n);
    std::cout << "The result of FuncA(0) for n=" << n << " is: " << result << std::endl;
    return 0;
}


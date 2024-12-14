#include <iostream>
#include "MyClass.h"

int main() {
    MyClass obj;
    int n = 3;  // Кількість елементів для обчислення
    double result = obj.FuncA(1.0, n);  // Виклик для гілки branchA
    std::cout << "Result: " << result << std::endl;

    return 0;
}


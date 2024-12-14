#include <iostream>
#include "MyClass.h"

int main() {
    MyClass obj;
    double result = obj.FuncA(0);
    std::cout << "The result of FuncA(0) is: " << result << std::endl;
    return 0;
}

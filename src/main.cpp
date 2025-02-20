#include <iostream>

extern int add(int a, int b);
extern int subtract(int a, int b);
extern int multiply(int a, int b)
int main() {
    int a = 5, b = 4;
    std::cout << "5 + 4 = " << add(a, b) << std::endl;
    std::cout << "5 - 4 = " << subtract(a, b) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
    return 0;
}

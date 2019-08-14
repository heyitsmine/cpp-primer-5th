//
// Created by hs on 19-7-10.
//

#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;

    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    double dval = 3.14;
    const int &ri = dval;     // ok
    std::cout << ri << std::endl;

    return 0;
}
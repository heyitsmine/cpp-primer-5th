//
// Created by hs on 2019/7/7.
//

#include <iostream>

int main()
{
    // prompt user to enter two numbers
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    while (v1 <= v2) {
        std::cout << v1 << std::endl;
        ++v1;
    }
    return 0;
}
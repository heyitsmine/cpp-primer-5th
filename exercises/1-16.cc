//
// Created by hs on 2019/7/7.
//

#include <iostream>

int main()
{
    int val = 0, sum = 0;
    for (; std::cin >> val; ) {
        sum += val;
    }
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}
//
// Created by hs on 2019/8/14.
//

#include <iostream>

void reset(int &val)
{
    val = 0;
}

int main()
{
    int val;
    while (std::cin >> val) {
        std::cout << "before reset: val = " << val << ".\n";
        reset(val);
        std::cout << "after reset: val = " << val << ".\n";
    }
    return 0;
}

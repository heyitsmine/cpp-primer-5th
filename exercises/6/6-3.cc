//
// Created by hs on 2019/8/14.
//

#include <iostream>

int fact(int n)
{
    if (n < 0 || n > 12)
        return -1;
    return n > 1 ? n * fact(n - 1) : 1;
}

int main()
{
    std::cout << fact(8) << std::endl;
    return 0;
}

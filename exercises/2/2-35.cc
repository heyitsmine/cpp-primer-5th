//
// Created by hs on 19-7-12.
//

#include <iostream>

int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    return 0;
}
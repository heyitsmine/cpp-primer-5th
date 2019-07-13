//
// Created by hs on 19-7-11.
//

#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
    return 0;
}
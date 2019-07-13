//
// Created by hs on 19-7-12.
//

#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;
    ++c;
    ++d;
    std::cout << a << '\t' << b << std::endl;
    std::cout << c << '\t' << d << std::endl;
    return 0;
}
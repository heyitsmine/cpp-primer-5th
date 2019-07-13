//
// Created by hs on 19-7-12.
//

#include <iostream>

int main()
{
//    auto i = 0, *p = &i;
//    auto sz = 0, pi = 3.14;
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
//    auto &h = 42;
    const auto &j = 42;
    std::cout << a << '\t' << b << '\t' << c << std::endl;
    std::cout << d << '\t' << e << '\t' << g << std::endl;
    a = 42;
    b = 42;
    c = 42;
    d = 42;
    e = 42;
    g = 42;
    return 0;
}
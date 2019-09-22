//
// Created by hs on 2019/9/18.
//

#include <iostream>

class numbered {
public:
    numbered()
    {
        mysn = unique++;
    }
    numbered(const numbered &orig)
    {
        mysn = unique++;
    }
    int  mysn;
    static int unique;
};

int numbered::unique = 10;

void f(const numbered &s)
{
    std::cout << s.mysn << std::endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    return 0;
}

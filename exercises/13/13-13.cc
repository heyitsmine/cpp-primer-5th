//
// Created by hs on 2019/9/18.
//

#include <iostream>
#include <vector>

struct X {
    X()
    {
        std::cout << "X()" << std::endl;
    }

    X(const X &)
    {
        std::cout << "X(const X&)" << std::endl;
    }

    X &operator=(const X &orig)
    {
        std::cout << "X &operator=" << std::endl;
    }

    ~X()
    {
        std::cout << "~X()" << std::endl;
    }
};

void fun1(X) {}
void fun2(X&) {}


int main()
{
    X x;
    std::cout << "fun1(x);" << std::endl;
    fun1(x);
    std::cout << std::endl;

    std::cout << "fun2(x);" << std::endl;
    fun2(x);
    std::cout << std::endl;

    std::cout << "auto px = new X;" << std::endl;
    auto px = new X;
    delete px;
    std::cout << std::endl;

    std::cout << "vec.push_back(x);" << std::endl;
    std::vector<X> vec;
    vec.push_back(x);
    std::cout << std::endl;
    x = *px;
    return 0;
}

//
// Created by hs on 2019/8/19.
//

#include <iostream>
using std::cin; using std::cout; using std::cerr; using std::endl;

void f()
{
    cout << "f()" << endl;
}

void f(int)
{
    cout << "f(int)" << endl;
}

void f(int, int)
{
    cout << "f(int, int)" << endl;
}

void f(double, double = 3.14)
{
    cout << "f(double, double = 3.14)" << endl;
}

int main()
{
    // f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    f();
    return 0;
}

//
// Created by hs on 2019/8/14.
//

#include <iostream>
using std::cin; using std::cerr;using std::cout; using std::endl;

#include <stdexcept>
using std::runtime_error;

int main()
{
    int a, b;
    while (cin >> a >> b) {
        if (b == 0)
            throw runtime_error("divisor can't be 0");
        cout << a / b << endl;
    }
    return 0;
}
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
        begin:
        try {
            if (b == 0)
                throw runtime_error("divisor can't be 0");
            cout << a / b << endl;
        } catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "Enter a new number: ";
            cin >> b;
            goto begin;
        }
    }
    return 0;
}

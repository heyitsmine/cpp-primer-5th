//
// Created by hs on 19-7-20.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int val;
    while (cin >> val && val != 42)
        cout << val << endl;
    return 0;
}
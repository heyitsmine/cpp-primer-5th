//
// Created by hs on 2019/9/3.
//

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    int a = 3;
    auto sum = [a](int b) -> int { return a + b; };
    cout << sum(2) << endl;
    return 0;
}

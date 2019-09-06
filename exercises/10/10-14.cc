//
// Created by hs on 2019/9/3.
//

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    auto sum = [](int a, int b) { return a + b; };
    cout << sum(1, 2) << endl;
    cout << [](int a, int b) { return a + b; }(2, 3)<< endl;
    return 0;
}

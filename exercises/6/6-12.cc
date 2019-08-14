//
// Created by hs on 2019/8/14.
//

#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    while (std::cin >> a >> b) {
        std::cout << "before swap: a = " << a << ", b = " << b <<".\n";
        swap(a, b);
        std::cout << "after swap: a = " << a << ", b = " << b <<".\n";
    }
    return 0;
}

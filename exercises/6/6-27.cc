//
// Created by hs on 2019/8/18.
//

#include <iostream>
#include <initializer_list>
using std::cin; using std::cout; using std::cerr; using std::endl;
using std::initializer_list;

int sum(initializer_list<int> ia)
{
    int res = 0;
    for (auto i : ia)
        res += i;
    return res;
}

int main()
{
    cout << sum({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;
    return 0;
}
//
// Created by hs on 2019/8/18.
//

#include <iostream>
using std::cin; using std::cout; using std::endl;

int larger(const int &a, const int * const pb)
{
    return a > *pb ? a : *pb;
}

int main()
{
    int a = 7;
    cout << larger(8, &a);
    return 0;
}
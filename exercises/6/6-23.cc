//
// Created by hs on 2019/8/18.
//


#include <iostream>
using std::cin; using std::cout; using std::endl;

void print(const int &i)
{
    cout << i << endl;
}

void print(const int ia[], const int size)
{
    for (int i = 0; i != size; ++i)
    {
        cout << ia[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(i);
    print(j, 2);
    return 0;
}
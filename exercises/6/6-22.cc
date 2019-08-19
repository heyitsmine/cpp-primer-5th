//
// Created by hs on 2019/8/18.
//

#include <iostream>
using std::cin; using std::cout; using std::endl;

void swap(int* &pa, int* &pb)
{
    int *temp = pa;
    pa = pb;
    pb = temp;
}

int main()
{
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;
    cout << pa << '\t' << pb << endl;
    swap(pa, pb);
    cout << pa << '\t' << pb << endl;
    return 0;
}
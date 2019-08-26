//
// Created by hs on 19-7-19.
//

#include "exercises/7/7-36.h"
#include <iostream>
using std::cout; using std::endl;
#include <cstdio>
#include <string>
using std::string;

void print_byte(int *flag)
{
    char *p = (char *) flag;
    int byte_size = 4;
    for(size_t i = 0; i < byte_size; i++)
        printf("%c ", p[i]);
    printf("\n");
}



int main()
{
    int a = -1;
    unsigned int b = 1;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    cout << sizeof(unsigned int) << endl;
    return 0;
}

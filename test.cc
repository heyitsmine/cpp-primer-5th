//
// Created by hs on 19-7-19.
//

#include <iostream>
#include <cstdio>

using std::cout;
using std::endl;

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
    int flag = 65;
    cout << sizeof flag << endl;
    print_byte(&flag);
    return 0;
}
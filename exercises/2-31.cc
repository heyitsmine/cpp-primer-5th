//
// Created by hs on 19-7-11.
//

#include <iostream>


int main()
{
    int i;
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    r1 = v2;
    p2 = p3;
    constexpr int null = 0;
    int *p = null;
    return 0;
}
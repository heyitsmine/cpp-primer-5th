//
// Created by hs on 2019/8/14.
//
#include "Chapter6.h"

int fact(int n)
{
    if (n < 0 || n > 12)
        return -1;
    return n > 1 ? n * fact(n - 1) : 1;
}
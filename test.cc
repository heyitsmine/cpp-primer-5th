//
// Created by hs on 19-7-19.
//

#include "exercises/7/7-36.h"
#include <iostream>
using std::cout; using std::endl;
#include <cstdio>
#include <string>
using std::string;

using Type = int;

int main()
{
    {
        Type a;
        using Type = double;
        Type b;
    }
    return 0;
}

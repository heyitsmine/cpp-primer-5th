//
// Created by hs on 2019/9/23.
//

#include "HasPtr.h"

int main()
{
    HasPtr hp1("hello"), hp2("World"), *pH = new HasPtr("World");
    hp1 = hp2;
    hp1 = std::move(*pH);
    return 0;
}

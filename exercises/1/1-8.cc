//
// Created by hs on 2019/7/7.
//

#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
//
// Created by hs on 2019/7/7.
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    while (std::cin >> book) {
        std::cout << book << std::endl;
    }
    return 0;
}
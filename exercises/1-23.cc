//
// Created by hs on 19-7-8.
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    int count = 0;
    Sales_item item, current_item;

    if (std::cin >> item) {
        current_item = item;
        count = 1;
        while (std::cin >> item) {
            if (item.isbn() == current_item.isbn())
                ++count;
            else {
                std::cout << current_item.isbn() << ": " << count << std::endl;
                current_item = item;
                count = 1;
            }
        }
        std::cout << current_item.isbn() << ": " << count << std::endl;
    }
    return 0;
}

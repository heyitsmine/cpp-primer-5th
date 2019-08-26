//
// Created by hs on 2019/8/26.
//

#include "7-41.h"
#include <string>
#include <iostream>
using std::string;

int main()
{
    string null_isbn("9-999-99999-9");
    std::cout << std::endl;

    Sales_data item1(null_isbn);
    std::cout << std::endl;

    Sales_data item2("9-999-99999-9");
    std::cout << std::endl;

    return 0;
}

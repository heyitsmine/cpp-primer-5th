//
// Created by hs on 2019/8/22.
//

#include "7-11.h"
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    Sales_data item1(cin);
    print(cout, item1) << endl;
    Sales_data item2;
    print(cout, item2) << endl;
    Sales_data item3("a");
    print(cout, item3) << endl;
    Sales_data item4("b", 10, 3.14);
    print(cout, item4) << endl;
    return 0;
}

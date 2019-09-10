//
// Created by hs on 2019/9/7.
//

#include <map>
#include <set>
#include <list>
#include <string>
#include <cstddef>
#include <iostream>
#include "7/Sales_data.h"

using std::map;
using std::multiset;
using std::list;
using std::string;
using std::cin; using std::cout; using std::endl;

map<string, list<int>> line_numbers;
multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)> bookstore(compareIsbn);

int main()
{
    return 0;
}

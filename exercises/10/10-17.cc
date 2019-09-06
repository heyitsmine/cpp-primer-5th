//
// Created by hs on 2019/9/3.
//

#include "7/Sales_data.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::stable_sort; using std::unique; using std::sort;
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<Sales_data> vec;
    Sales_data buf;
    while (read(cin, buf))
        vec.push_back(buf);
    sort(vec.begin(), vec.end(),
         [](Sales_data item1, Sales_data item2)
         { return item1.isbn() < item2.isbn(); });
    for (const auto &elem : vec) {
        print(cout, elem);
        cout << endl;
    }

    cout << endl;
    return 0;
}
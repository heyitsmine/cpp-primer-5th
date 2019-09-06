//
// Created by hs on 2019/9/6.
//

#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>
#include <iterator>

using std::cin; using std::cout; using std::endl;
using std::list;
using std::string;


int main()
{
    list<int> lst{1, 2, 3, 4, 5, 6, 0, 7, 8, 9};
    auto res_iter = std::find(lst.crbegin(), lst.crend(), 0);
    cout << *res_iter <<endl;
    return 0;
}

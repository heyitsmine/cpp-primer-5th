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
using std::list; using std::vector;
using std::string;


int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 0, 7, 8, 9};
    list<int> lst(5);
    std::copy(vec.cbegin() + 3, vec.cbegin() + 8, lst.begin());
    std::for_each(lst.cbegin(), lst.cend(), [](const int &val) { cout << val << ' '; });

    return 0;
}

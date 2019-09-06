//
// Created by hs on 2019/9/6.
//

#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;


int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::for_each(vec.crbegin(), vec.crend(), [](const int &val) { cout << val << ' '; });
    cout << endl;
    return 0;
}

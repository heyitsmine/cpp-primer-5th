//
// Created by hs on 2019/9/5.
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
    std::istream_iterator<int> item_iter(cin), eof;
    std::ostream_iterator<int> out_iter(cout, " ");
    vector<int> vec;
    std::copy(item_iter, eof, std::back_inserter(vec));
    std::sort(vec.begin(), vec.end());
    std::copy(vec.begin(), vec.end(), out_iter);
    return 0;
}

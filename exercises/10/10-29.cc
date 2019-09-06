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
    std::fstream in("/home/hs/CLionProjects/cpp-primer/examples/10/data/outFile1");
    std::istream_iterator<string> item_iter(in), eof;
    vector<string> vec;
    std::copy(item_iter, eof, std::back_inserter(vec));
    for (const auto &item : vec)
        cout << item << ' ';
    cout << endl;
    return 0;
}

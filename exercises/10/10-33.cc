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
    std::ifstream in("/home/hs/CLionProjects/cpp-primer/examples/10/data/outFile2");
    std::ofstream odd("odd.txt");
    std::ofstream even("even.txt");

    std::istream_iterator<int> item_iter(in), eof;
    std::ostream_iterator<int> odd_iter(odd, " ");
    std::ostream_iterator<int> even_iter(even, "\n");

    vector<int> vec;
    std::copy(item_iter, eof, std::back_inserter(vec));

    for(const auto &item : vec) {
        if (item & 0x1)
            *odd_iter++ = item;
        else
            *even_iter++ = item;
    }
    return 0;
}

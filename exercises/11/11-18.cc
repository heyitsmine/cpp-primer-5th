//
// Created by hs on 2019/9/9.
//
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <map>

using std::cin; using std::cout; using std::endl;
using std::pair;
using std::vector;
using std::string;
using std::map;

int main()
{
    map<string, size_t> word_count{{"Hello", 1}};
    map<string, size_t>::const_iterator map_it = word_count.cbegin();

    while (map_it != word_count.cend()) {
        cout << map_it->first << " occurs "
             << map_it->second << " times" << endl;
        ++map_it;
    }
};

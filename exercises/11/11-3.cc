//
// Created by hs on 2019/9/7.
//

#include <map>
#include <string>
#include <cstddef>
#include <iostream>

using std::map;
using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    string word;
    map<string, size_t> word_count;
    while (std::cin >> word) {
        ++word_count[word];
    }
    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
    }
    return 0;
}

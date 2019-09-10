//
// Created by hs on 2019/9/9.
//

#include <map>
#include <unordered_map>
#include <string>
#include <cstddef>
#include <iostream>

using std::map;
using std::unordered_map;
using std::string;
using std::cin; using std::cout; using std::endl;

size_t hasher(const string &s)
{
    return std::hash<string>()(s);
}

int main()
{
    string word;
    unordered_map<string, size_t, decltype(hasher)*> word_count(10, hasher);
    while (std::cin >> word) {
        ++word_count[word];
    }
    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
    }
    return 0;
}

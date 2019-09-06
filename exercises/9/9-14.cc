//
// Created by hs on 2019/8/30.
//

#include <vector>
#include <list>
#include <string>
#include <iostream>
using std::vector;
using std::list;
using std::string;

int main()
{
    list<const char *> l1 = {"hello", "world"};
    vector<string> vec;
    vec.assign(l1.begin(), l1.end());
    for (const auto &str : vec) {
        std::cout << str << std::endl;
    }
    std::cout << l1.max_size() << std::endl;
    std::cout << vec.max_size() << std::endl;
    return 0;
}

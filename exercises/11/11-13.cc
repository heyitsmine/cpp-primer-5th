//
// Created by hs on 2019/9/7.
//

#include <iostream>
#include <utility>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::pair;
using std::vector;
using std::string;

int main()
{
    vector<pair<string, int>> vec1, vec2, vec3;
    string s;
    int val;
    while (cin >> s >> val) {
        vec1.push_back({s, val});
        vec2.push_back(std::make_pair(s, val));
        vec3.push_back(pair<string, int>(s, val));
    }
    return 0;
}

//
// Created by hs on 2019/8/31.
//

#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout; using std::endl;

int main()
{
    vector<char> vec{'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    string str(vec.begin(), vec.end());
    cout << str << endl;
    return 0;
}

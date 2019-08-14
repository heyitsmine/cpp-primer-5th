//
// Created by hs on 19-7-16.
//

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v;
    string temp;
    while (cin >> temp) {
        v.push_back(temp);
    }
    for (auto str : v) {
        cout << str << ' ';
    }
    cout << endl;

    return 0;
}
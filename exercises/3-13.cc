//
// Created by hs on 19-7-16.
//

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for (auto str : v6) {
        cout << str << '*';
    }
    cout << endl;

    for (auto str : v7) {
        cout << str << '*';
    }
    cout << endl;

    return 0;
}
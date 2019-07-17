//
// Created by hs on 19-7-16.
//

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

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
    for (auto it = v.begin(); it != v.end(); ++it) {
        (*it)[0] = toupper((*it)[0]);
    }

    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << (*it) << ' ';
    }

    cout << endl;

    return 0;
}

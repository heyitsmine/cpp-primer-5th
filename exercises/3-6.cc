//
// Created by hs on 19-7-13.
//

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str("A simple string");
    for (char &c : str)
        c = 'X';
    cout << str << endl;

    str = "A simple string";
    decltype(str.size()) idx = 0;
    while (idx < str.size()) {
        str[idx] = 'X';
        ++idx;
    }
    cout << str << endl;

    str = "A simple string";
    for (decltype(str.size()) idx = 0; idx < str.size(); ++idx)
        str[idx] = 'X';
    cout << str << endl;
    return 0;
}

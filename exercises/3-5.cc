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
    string word, long_str;
    while (cin >> word) {
        long_str += long_str.empty() ? "" : " ";
        long_str += word;
    }
    cout << long_str << endl;
    return 0;
}
//
// Created by hs on 19-7-13.
//

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {
    string line;
    while (getline(cin, line)) {
        if (line.size() > 10)
            cout << line << endl;
    }
    return 0;
}
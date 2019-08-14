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
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = v.begin(); it != v.end(); ++it) {
        (*it) = (*it) * 2;
    }

    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << (*it) << ' ';
    }

    cout << endl;

    return 0;
}

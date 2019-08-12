//
// Created by hs on 19-7-21.
//

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto &item : vec) {
        item % 2 ? item : item *= 2;
    }
    for (auto item : vec) {
        cout << item << ' ';
    }
    cout << endl;
    return 0;
}
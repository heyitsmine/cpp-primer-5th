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
    vector<int> v;
    int temp;
    while (cin >> temp) {
        v.push_back(temp);
    }
    for (auto num : v) {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}
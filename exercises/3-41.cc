//
// Created by hs on 19-7-17.
//

#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v(begin(a), end(a));
    for (auto item : v)
        cout << item << ' ';
    cout << endl;
    return 0;
}
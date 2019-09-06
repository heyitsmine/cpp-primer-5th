//
// Created by hs on 2019/9/5.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using std::unique_copy; using std::sort;
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::list;
using std::back_inserter; using std::inserter; using std::front_inserter;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    list<int> lst1, lst2, lst3;
    auto iter1 = inserter(lst1, lst1.begin());
    auto iter2 = back_inserter(lst2);
    auto iter3 = front_inserter(lst3);
    for (const int &item : vec) {
        *iter1 = item;
        *iter2 = item;
        *iter3 = item;
    }


    for (const int &item : lst1)
        cout << item << ' ';
    cout << endl;

    for (const int &item : lst2)
        cout << item << ' ';
    cout << endl;

    for (const int &item : lst3)
        cout << item << ' ';
    cout << endl;

    return 0;
}

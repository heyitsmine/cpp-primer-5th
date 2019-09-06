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
using std::back_inserter;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 2, 3, 4, 5, 6, 13, 4, 4, 5};
    sort(vec.begin(), vec.end());
    list<int> lst;
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));

    for (const int &item : lst)
        cout << item << ' ';
    cout << endl;

    return 0;
}

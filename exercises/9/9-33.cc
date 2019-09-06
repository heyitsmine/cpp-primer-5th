//
// Created by hs on 2019/8/31.
//
#include <vector>
#include <list>
#include <forward_list>
#include <iostream>

using std::vector;
using std::list;
using std::forward_list;
using std::cout; using std::endl;

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = v.begin(); // bad idea, saving the value of the end iterator
    // safer: recalculate end on each trip whenever the loop adds/erases elements
    while (begin != v.end()) {

        ++begin;  // advance begin because we want to insert after this element
        begin = v.insert(begin, 42);  // insert the new value
        ++begin;  // advance begin past the element we just added
    }
    for (const auto &elem : v)
        cout << elem << ' ';
    cout << endl;
    return 0;
}

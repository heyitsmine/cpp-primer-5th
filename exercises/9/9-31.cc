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
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = li.begin(); // call begin, not cbegin because we're changing li
    while (iter != li.end()) {
        if (*iter % 2) {
            iter = li.insert(iter, *iter);  // duplicate the current element
            ++iter;
            ++iter;
        } else
            iter = li.erase(iter);          // remove even elements
    }

    for (const auto &elem : li)
        cout << elem << ' ';
    cout << endl;

    forward_list<int> fli = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = fli.before_begin();
    auto curr = fli.begin();
    while (curr != fli.end()) {
        if(*curr % 2) {
            curr = fli.insert_after(curr, *curr);
            prev = curr;
            ++curr;
        } else {
            curr = fli.erase_after(prev);
        }
    }
    for (const auto &elem : fli)
        cout << elem << ' ';
    cout << endl;
    return 0;
}

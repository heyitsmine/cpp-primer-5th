//
// Created by hs on 2019/8/30.
//

#include <list>
#include <vector>
#include <iostream>
using std::list;
using std::vector;
using std::cout; using std::endl;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    list<int> lst(std::begin(ia), std::end(ia));
    vector<int> vec(std::begin(ia), std::end(ia));

    for (auto iter = lst.begin(); iter != lst.end();) {
        if (*iter % 2 == 1)
            iter = lst.erase(iter);
        else
            ++iter;
    }

    for (auto iter = vec.begin(); iter != vec.end();) {
        if (*iter % 2 == 0)
            iter = vec.erase(iter);
        else
            ++iter;
    }

    for (const auto &num : lst)
        cout << num << ' ';
    cout << endl;

    for (const auto &num : vec)
        cout << num << ' ';
    cout << endl;

    return 0;
}

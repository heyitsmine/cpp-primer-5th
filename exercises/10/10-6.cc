//
// Created by hs on 2019/9/3.
//

#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>

using std::fill_n;
using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7};
    auto ret = fill_n(vec.begin(), vec.size(), 0);
    for (auto iter = vec.begin(); iter != vec.end(); ++iter)
        cout << *iter << ' ';
    cout << endl;
    return 0;
}

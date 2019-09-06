//
// Created by hs on 2019/9/2.
//

#include <algorithm>
#include <iostream>
#include <vector>

using std::count;
using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 3, 2};
    int res = count(vec.begin(), vec.end(), 9);
    cout << res << endl;
    return 0;
}

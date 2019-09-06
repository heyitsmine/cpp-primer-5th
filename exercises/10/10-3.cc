//
// Created by hs on 2019/9/3.
//

#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>

using std::count;
using std::accumulate;
using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 3, 2};
    int res = accumulate(vec.begin(), vec.end(), 0);
    cout << res << endl;
    return 0;
}

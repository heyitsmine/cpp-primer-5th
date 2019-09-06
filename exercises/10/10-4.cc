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
    vector<double > vec{1.1, 1.3, 1.4};
    auto res = accumulate(vec.begin(), vec.end(), 0.0);
    cout << res << endl;
    return 0;
}

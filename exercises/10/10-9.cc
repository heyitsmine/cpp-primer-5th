//
// Created by hs on 2019/9/3.
//

#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>

using std::count; using std::unique; using std::sort;
using std::accumulate;
using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> vec;
    int buf = 0;
    while (cin >> buf) {
        vec.push_back(buf);
    }
    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
    for (const auto &elem : vec)
        cout << elem << ' ';
    cout << endl;
    return 0;
}

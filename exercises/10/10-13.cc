//
// Created by hs on 2019/9/3.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::partition;
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

bool moreThanFive(const string &s)
{
    return s.size() > 5;
}

int main()
{
    vector<string> vec{"partition", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto end_partition = partition(vec.begin(), vec.end(), moreThanFive);
    for (auto iter = vec.begin(); iter != end_partition; ++iter)
        cout << *iter << ' ';
    cout << endl;
}

//
// Created by hs on 2019/9/3.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::stable_sort; using std::unique; using std::sort;
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShort(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(vec);
    for (const auto &elem : vec)
        cout << elem << ' ';
    cout << endl;

    stable_sort(vec.begin(), vec.end(), isShort);
    for (const auto &elem : vec)
        cout << elem << ' ';
    cout << endl;
    return 0;
}
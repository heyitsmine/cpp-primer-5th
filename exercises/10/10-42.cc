//
// Created by hs on 2019/9/6.
//

#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::list;
using std::string;

void elimDups(list<string> &words)
{
    words.sort();
    words.unique();
}

int main()
{
    list<string> lst{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(lst);
    for (const auto &item : lst) {
        cout << item << " ";
    }
    cout << endl;
    return 0;
}

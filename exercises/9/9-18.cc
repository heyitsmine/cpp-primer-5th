//
// Created by hs on 2019/8/30.
//


#include <deque>
#include <string>
#include <iostream>

using std::deque;
using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    deque<string> dq;
    string buf;
    while (cin >> buf) {
        dq.push_back(buf);
    }
    for (auto iter = dq.begin(); iter != dq.end(); ++iter)
        cout << *iter << endl;
    return 0;
}

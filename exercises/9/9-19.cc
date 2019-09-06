//
// Created by hs on 2019/8/30.
//

#include <list>
#include <string>
#include <iostream>

using std::list;
using std::string;
using std::cin; using std::cout; using std::endl;

int main()
{
    list<string> lt;
    string buf;
    while (cin >> buf) {
        lt.push_back(buf);
    }
    for (auto iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << endl;
    return 0;
}

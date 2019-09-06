//
// Created by hs on 2019/9/2.
//

#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using std::count;
using std::cin; using std::cout; using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> lst{"Hello", "Hello", "World", "Hello", "World"};
    int res = count(lst.begin(), lst.end(), "World");
    cout << res << endl;
    return 0;
}

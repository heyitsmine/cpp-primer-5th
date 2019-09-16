//
// Created by hs on 2019/9/15.
//

#include <memory>
#include <iostream>
#include <string>

using std::allocator;
using std::cin; using std::cout; using std::endl;
using std::string;


int main()
{
    int n = 10;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    string s;
    string *q = p;
    while (cin >> s && q != p + n)
        alloc.construct(q++, s);
    while (q != p)
        alloc.destroy(--q);
    alloc.deallocate(p, n);
    return 0;
}

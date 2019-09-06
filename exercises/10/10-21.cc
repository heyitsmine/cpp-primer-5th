//
// Created by hs on 2019/9/5.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;


int main()
{
    int val = 3;
    cout << val << endl;
    auto f = [&val]() -> bool { return val > 0 ? !--val : !val; };
    while (!f()) {
        cout << val << " ";
    }
    cout << val << endl;
    return 0;
}

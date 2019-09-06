//
// Created by hs on 2019/8/30.
//

#include <list>
#include <deque>
#include <iostream>
using std::list;
using std::deque;

int main()
{
    list<int> l1{1,2,3,4,5,6,7,8,9};
    deque<int> even, odd;
    for (auto num : l1) {
        if (num % 2 == 0)
            even.push_back(num);
        else
            odd.push_back(num);
    }
    for (auto num : even)
        std::cout << num << ' ';
    std::cout << '\n';
    for (auto num : odd)
        std::cout << num << ' ';
    std::cout << '\n';
    return 0;
}

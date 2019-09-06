//
// Created by hs on 2019/8/29.
//

#include <iostream>
#include <vector>
using std::cout; using std::endl;
using std::vector;

bool find_v(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
    while (begin != end) {
        if (*begin == val)
            return true;
        ++begin;
    }
    return false;
}

int main ()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << find_v(vec.begin(), vec.end(), 0) << endl;
    return 0;
}

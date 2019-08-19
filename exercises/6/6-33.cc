//
// Created by hs on 2019/8/18.
//

#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::cerr; using std::endl;
using std::vector;

void print_vector(vector<int>::const_iterator beg, vector<int>::const_iterator end)
{
    if (beg == end)
        return;
    else
    {
        cout << *beg << ' ';
        print_vector(beg + 1, end);
    }
}

int main()
{
    vector<int> ia = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_vector(ia.begin(), ia.end());
    return 0;
}

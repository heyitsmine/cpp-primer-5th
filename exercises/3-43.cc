//
// Created by hs on 19-7-17.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <cstddef>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int ia[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (auto &row : ia)
        for (auto col : row)
            cout << col << ' ';
    cout << endl;

    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 4; j++)
            cout << ia[i][j] << ' ';
    cout << endl;

    for (int (*pr)[4] = begin(ia); pr != end(ia); ++pr)
        for (int *pc = *pr; pc != *pr + 4; ++pc )
            cout << *pc << ' ';
    cout << endl;

    return 0;
}
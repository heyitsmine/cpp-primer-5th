//
// Created by hs on 19-7-17.
//

#include <iostream>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int array_size = 10;
    int ia[array_size];

    for (size_t i = 0; i < array_size; i++)
        ia[i] = i;
    for (auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}

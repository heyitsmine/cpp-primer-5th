//
// Created by hs on 19-7-21.
//

#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;
    for (auto i : ivec)
        cout << i << ' ';
    cout << endl;
    return 0;
}

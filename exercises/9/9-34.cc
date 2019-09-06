//
// Created by hs on 2019/8/31.
//

#include <vector>
#include <iostream>

using std::vector;
using std::cout; using std::endl;

int main()
{
    vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if(*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            ++iter;
        }

        ++iter;
    }
    for (const auto &elem : vi)
        cout << elem << ' ';
    cout << endl;
    return 0;
}

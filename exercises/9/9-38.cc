//
// Created by hs on 2019/8/31.
//

#include <vector>
using std::vector;

#include <iostream>
using std::cout; using std::endl;

int main()
{
    vector<int> ivec;

    // size should be zero; capacity is implementation defined
    cout << "ivec: size: " << ivec.size()
         << " capacity: "  << ivec.capacity() << endl;

    // give ivec 24 elements
    for (vector<int>::size_type ix = 0; ix != 50; ++ix)
    {
        ivec.push_back(ix);
        cout << "ivec: size: " << ivec.size()
             << " capacity: "  << ivec.capacity() << endl;
    }

    return 0;
}


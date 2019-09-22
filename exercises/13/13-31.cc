//
// Created by hs on 2019/9/19.
//

#include "13-30.h"
#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
    std::vector<HasPtr> vec;
    for (int i = 0; i < 40; ++i)
        vec.push_back(std::to_string(i));


    std::sort(vec.begin(), vec.end());
    for(auto &item : vec) {
        item.show();
    }

    return 0;
}

//
// Created by hs on 2019/9/12.
//

#include <iostream>
#include <memory>


int main()
{
    auto sp = std::make_shared<int>();
    auto p = sp.get();
    delete p;
    return 0;
}

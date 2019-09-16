//
// Created by hs on 2019/9/13.
//

#include <iostream>
#include <string>
#include <memory>

int main()
{
    std::unique_ptr<std::string> uptr(new std::string(3, 'c'));
    auto uptr2 = uptr;
    return 0;
}

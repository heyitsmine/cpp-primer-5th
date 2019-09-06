//
// Created by hs on 2019/8/28.
//

#include <iostream>
#include <sstream>
#include <string>

std::istringstream &print(std::istringstream &is) {
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main()
{
    std::istringstream is("Hello world!");
    print(is);
    std::cout << std::endl;
    std::cout << is.str() << std::endl;
    return 0;
}

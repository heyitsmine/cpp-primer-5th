//
// Created by hs on 2019/8/28.
//

#include <iostream>
#include <string>

std::istream &print(std::istream &is) {
    std::string buf;
    while (is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main()
{
    print(std::cin);
    std::cout << std::endl;
    std::string str;
    std::cin >> str;
    std::cout << str << std::endl;
    return 0;
}

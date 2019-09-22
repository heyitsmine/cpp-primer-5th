//
// Created by hs on 2019/9/20.
//

#include <vector>
#include "String.h"
#include <iostream>

int main()
{
    std::vector<String> vec;
    String str("world");
    std::cout <<"1: " << vec.capacity() << " " << vec.size() + 1 << std::endl;
    vec.push_back(String("Hello"));

    std::cout <<"2: " << vec.capacity() << " " << vec.size() + 1 << std::endl;

    vec.push_back(String("Hello"));

    std::cout <<"3: " << vec.capacity() << " " << vec.size() + 1 << std::endl;
    vec.push_back(String("Hello"));

    std::cout <<"4: " << vec.capacity() << " " << vec.size() + 1 << std::endl;
    vec.push_back(String("Hello"));

    std::cout <<"5: " << vec.capacity() << " " << vec.size() + 1 << std::endl;
    vec.push_back(String("Hello"));

    std::cout <<"6: " << vec.capacity() << " " << vec.size() + 1 << std::endl;
    vec.push_back(String("Hello"));

    return 0;
}

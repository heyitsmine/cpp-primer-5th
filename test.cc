//
// Created by hs on 19-7-19.
//

#include <iostream>
#include <memory>
#include <string>
#include <iostream>

std::string fun()
{
    auto sp = std::make_shared<std::string>("Hello world!");
    std::cout << sp.get() << std::endl;
    std::cout << sp.use_count() << std::endl;
    return *sp;
}

int main()
{
//    std::string str =  fun();
//    auto str =  new std::string("Hello");
//    auto sp = std::shared_ptr<std::string>(str);
//    std::cout << sp.get() << std::endl;
//    std::cout << sp.use_count() << std::endl;
    return 0;
}

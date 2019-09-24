//
// Created by hs on 19-7-19.
//

#include <iostream>
#include <memory>
#include <string>
#include <iostream>
#include "exercises/12/StrBlob.h"

class Data {
public:
    int ival;
    std::string s;
private:
    int fun() { return ival;};
    static const char cval = 1;
};
int main()
{
    Data val1 = {0, "Anna"};

    int &&a = 1;
    int &&b = std::move(1);
    b = 2;
    std::cout << a << " " << b << std::endl;

    return 0;
}

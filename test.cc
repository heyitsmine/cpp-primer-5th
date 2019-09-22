//
// Created by hs on 19-7-19.
//

#include <iostream>
#include <memory>
#include <string>
#include <iostream>

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
    return 0;
}

//
// Created by hs on 2019/9/15.
//

#include <iostream>
#include <string>
#include <cstring>

using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    char str1[] = "Hello ";
    size_t sz1 = strlen(str1);
    char str2[] = "world!";
    size_t sz2 = strlen(str2);
    char *str = new char[sz1 + sz2 + 1];
    for(size_t i = 0; i < sz1; ++i)
        str[i] = str1[i];
    for(size_t i = 0; i < sz2; ++i)
        str[sz2 + i] = str2[i];
    cout << str << endl;
    delete[] str;

    string str3 = "Hello ";
    size_t sz3 = str3.size();
    string str4 = "world!";
    size_t sz4 = str4.size();
    char *sstr = new char[sz3 + sz4 + 1];
    for(size_t i = 0; i < sz3; ++i)
        sstr[i] = str3[i];
    for(size_t i = 0; i < sz4; ++i)
        sstr[sz2 + i] = str4[i];
    cout << sstr << endl;
    delete[] sstr;
    cout << str3 + str4 << endl;
    return 0;
}

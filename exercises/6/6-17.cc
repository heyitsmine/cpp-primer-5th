//
// Created by hs on 2019/8/18.
//

#include <string>
#include <cctype>
#include <iostream>
using std::string;
using std::tolower;
using std::cin; using std::cout; using std::endl;

bool contain_capital(const string &s)
{
    for (auto c : s)
        if ('A' <= c && c <= 'Z')
            return true;
    return false;
}

void to_lowercase(string &s)
{
    for (auto &c : s)
    {
        c = tolower(c);
    }
}

int main()
{
    string str;
    while (cin >> str)
    {
        cout << (contain_capital(str) ? "Yes" : "No") << endl;
        to_lowercase(str);
        cout << str << endl;
    }
    return 0;
}
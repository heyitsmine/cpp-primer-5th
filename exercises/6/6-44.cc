//
// Created by hs on 2019/8/19.
//
#include <string>
#include <iostream>
using std::string;
using std::cin; using std::cout; using std::cerr; using std::endl;

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    cout << isShorter("123", "1234") << endl;
    return 0;
}

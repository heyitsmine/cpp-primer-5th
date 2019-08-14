//
// Created by hs on 19-7-21.
//

#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;
    pv = (void*) ps;
    pv = const_cast<string*>(ps);
    i = static_cast<int>(*pc);
    pv = reinterpret_cast<void*>(&d);
    pc = reinterpret_cast<char*>(pv);
    return 0;
}
//
// Created by hs on 2019/8/19.
//
#include <string>
#include <iostream>
using std::string;
using std::cin; using std::cout; using std::cerr; using std::endl;

string make_plural(size_t ctr, const string &word,
                   const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << make_plural(1, "success", "es") << endl;
    cout << make_plural(2, "success", "es") << endl;
    cout << make_plural(1, "failure") << endl;
    cout << make_plural(2, "failure") << endl;
    return 0;
}

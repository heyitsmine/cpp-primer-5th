//
// Created by hs on 2019/8/31.
//

#include <string>
#include <iostream>

using std::string;
using std::cout; using std::endl;

string rename(string name, const string &prefix, const string &suffix)
{
    name.insert(0, prefix);
    name.insert(name.size(), suffix);
    return name;
}

int main()
{
    string name("Wang");
    cout << rename(name, "Mr.", ", Jr.") << endl;
    return 0;
}

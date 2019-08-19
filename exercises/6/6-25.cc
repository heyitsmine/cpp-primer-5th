//
// Created by hs on 2019/8/18.
//

#include <iostream>
#include <string>
using std::cin; using std::cout; using std::cerr; using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "need 2 arguements." << endl;
        return 0;
    }
    string str1 = argv[1], str2 = argv[2];
    cout << str1 + str2 << endl;
    return 0;
}
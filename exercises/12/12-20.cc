//
// Created by hs on 2019/9/14.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "StrBlob.h"
#include "StrBlobPtr.h"

using std::cin; using std::cout; using std::endl;
using std::ifstream; using std::istringstream;
using std::string;

int main()
{
    string data_filename("/home/hs/CLionProjects/cpp-primer/examples/12/data/storyDataFile");
    ifstream in(data_filename);
    string buf;
    while (getline(in, buf))
    {
        StrBlob strBlob;
        istringstream iss(buf);
        string word;
        while (iss >> word)
        {
            strBlob.push_back(word);
        }
        for (auto ptr = strBlob.begin(); ptr != strBlob.end(); ptr.incr())
            cout << ptr.deref() << " ";
        cout << endl;
    }
    return 0;
}

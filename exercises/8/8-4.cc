//
// Created by hs on 2019/8/28.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::cout; using std::endl;
using std::ifstream;
using std::vector;
using std::string;

void read_file (const string &filename, vector<string> &vec) {
    ifstream in(filename);
    string buf;
    while (getline(in, buf)) {
        vec.push_back(buf);
    }
}

int main()
{
    string filename("/home/hs/CLionProjects/cpp-primer/examples/8/data/add_item");
    vector<string> lines;
    read_file(filename, lines);
    for (string &line : lines)
        cout << line << endl;
    return 0;
}

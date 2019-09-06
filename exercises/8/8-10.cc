//
// Created by hs on 2019/8/28.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::string filename("/home/hs/CLionProjects/cpp-primer/examples/8/data/sstream");
    std::ifstream ifs(filename);
    std::vector<std::string> vec;
    std::string buf;
    while (std::getline(ifs, buf)) {
        vec.push_back(buf);
    }

    std::string word;
    for (const std::string &line : vec) {
        std::istringstream iss(line);
        while (iss >> word) {
            std::cout << word << std::endl;
        }
    }

    return 0;
}
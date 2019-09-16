//
// Created by hs on 2019/9/16.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <memory>
#include <cctype>
using std::ifstream;
using std::cout; using std::cin; using std::endl;
using std::vector;
using std::string;
using std::map;
using std::set;

std::ostream &print(std::ostream &os, map<string, set<int>> &data, const string &word, vector<string> &lines)
{
    const auto line_nums = data[word];

    os << word << " occurs " << line_nums.size()
       << (line_nums.size() > 1 ? " times" : " time")
       << std::endl;

    for (auto line : line_nums) {
        os << "    " << "(line " << line << ") " << lines[line - 1] << std::endl;
    }
    return os;
}

int main()
{
    ifstream infile("/home/hs/CLionProjects/cpp-primer/examples/12/data/storyDataFile");
    vector<string> lines;
    std::map<std::string, std::set<int>> data;
    std::string buf;
    while (getline(infile, buf)) {
        lines.push_back(buf);
    }
    for (size_t ix = 0; ix < lines.size(); ++ix) {
        std::istringstream instr(lines[ix]);
        std::string word;
        while (instr >> word) {
            for (auto iter = word.begin(); iter != word.end();) {
                if (isalnum(*iter)) {
                    *iter = std::tolower(*iter);
                    iter++;
                } else
                    iter = word.erase(iter);
            }
            data[word].insert(ix + 1);
        }
    }
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        // stop if we hit end-of-file on the input or if a 'q' is entered
        if (!(cin >> s) || s == "q") break;
        // run the query and print the results
        print(cout, data, s, lines) << endl;
    }
    return 0;
}

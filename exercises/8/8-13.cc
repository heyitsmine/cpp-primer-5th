//
// Created by hs on 2019/8/28.
//

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;
using std::istringstream;
using std::ifstream;

// members are public by default; see § 7.2 (p. 268)
struct PersonInfo {
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people; // will hold all the records from the input
    // read the input a line at a time until cin hits end-of-file (or another error)
    ifstream in("/home/hs/CLionProjects/cpp-primer/examples/8/data/sstream");
    istringstream record;

    while (getline(in, line)) {
        PersonInfo info;      // create an object to hold this record's data
        record.clear();
        record.str(line);
        record >> info.name;  // read the name
        while (record >> word)        // read the phone numbers
            info.phones.push_back(word);  // and store them
        people.push_back(info); // append this record to people
    }
    for (const auto &p : people) {
        cout << p.name << ": ";
        for (const auto &pho : p.phones) {
            cout << pho << " ";
        }
        cout << endl;
    }
    return 0;
}

//
// Created by hs on 2019/9/25.
//

#include <iostream>
using std::istream; using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;


class ReadLine {
public:
    explicit ReadLine(istream &is_) : is(is_) {}
    string operator()() {
        string res;
        getline(is, res);
        if(!is)
            res = string();
        return res;
    }

private:
    istream &is;
};

int main()
{
    string str;
    auto read_line_from_cin = ReadLine(cin);
    str = read_line_from_cin();
    cout << str << endl;
    return 0;
}

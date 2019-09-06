//
// Created by hs on 2019/8/30.
//

#include <forward_list>
#include <iostream>
#include <string>
using std::forward_list;
using std::cout; using std::endl;
using std::string;

void insert_string(forward_list<string> &flst, string str1, string str2)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr == str1) {
            flst.insert_after(curr, str2);
            return;
        } else {
            prev = curr;
            ++curr;
        }
    }

    if (curr == flst.end())
        flst.insert_after(prev, str2);
    return;
}

int main()
{
    forward_list<string> flst = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    insert_string(flst, "2-", "33");
    for (const auto &elem : flst)
        cout << elem << ' ';
    cout << endl;

    return 0;
}

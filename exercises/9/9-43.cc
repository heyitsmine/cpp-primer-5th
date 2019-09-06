//
// Created by hs on 2019/8/31.
//

#include <string>
#include <iostream>

using std::string;
using std::cout; using std::endl;

void replace_with(string &s, const string &oldVal, const string &newVal)
{
    for(auto iter = s.begin(); iter < s.end() - oldVal.size(); ) {
        if (oldVal == string(iter, iter + oldVal.size())) {
            iter = s.erase(iter, iter + oldVal.size());
            iter = s.insert(iter, newVal.begin(), newVal.end());
            iter += newVal.size();
        } else {
            ++iter;
        }
    }
}

int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    cout << s << endl;

    return 0;
}

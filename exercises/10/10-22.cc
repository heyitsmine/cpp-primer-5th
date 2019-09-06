//
// Created by hs on 2019/9/5.
//

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <functional>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::bind;
using namespace std::placeholders;

string make_plural(int count, const string &word, const string &suffix)
{
    return count > 1 ? word + suffix : word;
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

int countLongerThan6(vector<string> &words, vector<string>::size_type sz)
{
    auto check_sz = bind(check_size, _1, sz);
    auto count = count_if(words.begin(), words.end(), check_sz);
    return count;
}

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    string::size_type sz = 5;
    int count = countLongerThan6(vec, sz);
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer" << endl;
    return 0;
}

//
// Created by hs on 2019/9/5.
//
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

string make_plural(int count, const string &word, const string &suffix)
{
    return count > 1 ? word + suffix : word;
}

void count_size_larger_than(vector<string> &words,
             vector<string>::size_type sz)
{

    auto count = count_if(words.begin(), words.end(),
                      [sz](const string &a)
                      { return a.size() >= sz; });

    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer" << endl;
}

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    count_size_larger_than(vec, 6);
    return 0;
}

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

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

string make_plural(int count, const string &word, const string &suffix)
{
    return count > 1 ? word + suffix : word;
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() < sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    auto check_sz = bind(check_size, _1, sz);
    auto wc = std::partition(words.begin(), words.end(), check_sz);
    auto count = words.end() - wc;
    std::stable_sort(wc, words.end(),
                     [](const string &a, const string &b) { return a.size() < b.size(); });
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer" << endl;
    std::for_each(wc, words.end(),
                  [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main()
{
    vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(vec, 4);
    return 0;
}

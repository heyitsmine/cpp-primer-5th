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
using std::find_if;
using namespace std::placeholders;

string make_plural(int count, const string &word, const string &suffix)
{
    return count > 1 ? word + suffix : word;
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() < sz;
}

int find_val(const string &word, vector<int> &vec)
{
    auto check_sz = bind(check_size, word, _1);
    auto iter = find_if(vec.begin(), vec.end(), check_sz);
    return *iter;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int count = find_val("hello", vec);
    cout << count << endl;
    return 0;
}

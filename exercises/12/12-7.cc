//
// Created by hs on 2019/9/12.
//

#include <vector>
#include <iostream>
#include <memory>

using std::vector;
using std::cin; using std::cout; using std::endl;
using std::make_shared; using std::shared_ptr;

shared_ptr<vector<int>> get_vector()
{
    return make_shared<vector<int>>();
}

void input_vector(const shared_ptr<vector<int>> &spvec)
{
    int buf;
    while (cin >> buf) {
        spvec->push_back(buf);
    }
}

void print_vector(shared_ptr<vector<int>> spvec)
{
    for (const auto &item : *spvec)
        cout << item << " ";
    cout << endl;
}

int main()
{
    auto spvec = get_vector();
    input_vector(spvec);
    print_vector(spvec);
    return 0;
}

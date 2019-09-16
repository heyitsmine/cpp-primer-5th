//
// Created by hs on 2019/9/11.
//

#include <vector>
#include <iostream>

using std::vector;
using std::cin; using std::cout; using std::endl;

vector<int> *get_vector()
{
    return new vector<int>;
}

void input_vector(vector<int> *pvec)
{
    int buf;
    while (cin >> buf) {
        pvec->push_back(buf);
    }
}

void print_vector(vector<int> *pvec)
{
    for (const auto &item : *pvec)
        cout << item << " ";
    cout << endl;
}

int main()
{
    auto pvec = get_vector();
    input_vector(pvec);
    print_vector(pvec);
    delete pvec;
    return 0;
}

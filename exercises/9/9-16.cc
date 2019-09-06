
//
// Created by hs on 2019/8/30.
//

#include <vector>
#include <list>
#include <iostream>
using std::vector;
using std::list;
using std::cout; using std::endl;

bool vector_equal(const vector<int> &a, const vector<int> &b)
{
    if (a.size() != b.size())
        return false;
    for (auto iter_a = a.cbegin(), iter_b = b.cbegin(); iter_a != a.cend(); ++iter_a, ++iter_b) {
        if (*iter_a != *iter_b)
            return false;
    }
    return true;
}

int main()
{
    vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l2{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << vector_equal(vec1, vector<int>(l2.cbegin(), l2.cend())) << endl;
    cout << vector_equal(vec1, vector<int>(l3.cbegin(), l3.cend())) << endl;
    return 0;
}

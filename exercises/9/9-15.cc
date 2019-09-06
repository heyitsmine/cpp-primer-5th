//
// Created by hs on 2019/8/30.
//

#include <vector>
#include <iostream>
using std::vector;
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
    vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << vector_equal(vec1, vec2) << endl;
    cout << vector_equal(vec2, vec3) << endl;
    return 0;
}

//
// Created by hs on 2019/8/30.
//

#include <vector>
#include <list>
using std::vector;
using std::list;

int main()
{
    list<int> l1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<double> vec2{l1.begin(), l1.end()};
    vector<double> vec3(l1.begin(), l1.end());

    return 0;
}

//
// Created by hs on 2019/8/30.
//

#include <vector>
using std::vector;

int main()
{
    vector<int> vec0;
    vector<int> vec1(10);
    vector<int> vec2(10, 1);
    vector<int> vec3{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec4 = vec1;
    vector<int> vec5{vec3.cbegin(), vec3.cend() - 2};
    return 0;
}

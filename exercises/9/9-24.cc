//
// Created by hs on 2019/8/30.
//

#include <vector>
#include <iostream>
using std::vector;
using std::cout; using std::endl;
int main()
{
    vector<int> vec;
    std::cout<< "vec.at(0): " << vec.at(0) << std::endl;
    std::cout<< "vec[0]: " << vec[0] << std::endl;
    std::cout<< "vec.front(): " << vec.front() << std::endl;
    std::cout<< "*vec.begin(): " << *vec.begin() << std::endl;
    return 0;
}

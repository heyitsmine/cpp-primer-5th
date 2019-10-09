//
// Created by hs on 2019/9/26.
//

#include <functional>
#include <algorithm>
#include <vector>
#include <string>
using namespace std::placeholders;

std::vector<int> veci;
std::vector<std::string> vecs;
std::string pooh;
std::greater<int> greaterInt;

int resi = std::count_if(veci.begin(), veci.end(), std::bind(std::greater<int>(), _1, 1024));
std::string ress = *std::find_if(vecs.begin(), vecs.end(), std::bind(std::equal_to<std::string>(), _1, pooh));

class A {
public:
    int operator()(int a=1, int b=2)
    {
        return a + b;
    }
};

int main()
{
    A a;
    a();
    a(1);
    a(1, 2);
    return 0;
}

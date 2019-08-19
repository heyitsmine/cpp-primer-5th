//
// Created by hs on 2019/8/19.
//
#include <vector>
#include <iostream>
using std::vector;
using std::cin; using std::cout; using std::cerr; using std::endl;

using F1 = int(*)(int, int);
typedef int(*F2)(int, int);

vector<int(*)(int, int)> func_vec1;
vector<F1> func_vec2;
vector<F2> func_vec3;

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multipy(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int main()
{
    func_vec1.push_back(add);
    func_vec1.push_back(substract);
    func_vec1.push_back(multipy);
    func_vec1.push_back(divide);
    int a = 10, b = 5;
    for (auto fun : func_vec1)
    {
        cout << fun(a, b) << ' ';
    }
    cout << endl;

    func_vec2.push_back(add);
    func_vec2.push_back(substract);
    func_vec2.push_back(multipy);
    func_vec2.push_back(divide);
    for (auto fun : func_vec2)
    {
        cout << fun(a, b) << ' ';
    }
    cout << endl;

    func_vec3.push_back(add);
    func_vec3.push_back(substract);
    func_vec3.push_back(multipy);
    func_vec3.push_back(divide);
    for (auto fun : func_vec3)
    {
        cout << fun(a, b) << ' ';
    }
    cout << endl;
    return 0;
}

//
// Created by hs on 19-7-21.
//

#include <iostream>

using std::cout; using std::endl;

int main()
{
    char c;
    cout << "Size of char is " << sizeof(char) << '.' << endl;
    cout << "Size of pointer is " << sizeof(&c) << '.' << endl;
    cout << "Size of short is " << sizeof(short) << '.' << endl;
    cout << "Size of int is " << sizeof(int) << '.' << endl;
    cout << "Size of long is " << sizeof(long) << '.' << endl;
    cout << "Size of long long is " << sizeof(long long) << '.' << endl;
    cout << "Size of float is " << sizeof(float) << '.' << endl;
    cout << "Size of double is " << sizeof(double) << '.' << endl;
    cout << "Size of long double is " << sizeof(long double) << '.' << endl;
    return 0;
}
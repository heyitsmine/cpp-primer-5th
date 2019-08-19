//
// Created by hs on 2019/8/18.
//

#include <string>
std::string (&func())[10];

using arrS = std::string[10];
arrS &func();

auto func() -> std::string (&)[10];

std::string arrStr[10];
decltype(arrStr) &func();

extern int a;
extern int a;

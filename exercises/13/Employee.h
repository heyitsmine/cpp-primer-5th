//
// Created by hs on 2019/9/18.
//

#ifndef CPP_PRIMER_EMPLOYEE_H
#define CPP_PRIMER_EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee():id(unique++){}
    Employee(std::string name_):name(name_)
    {
        id = unique++;
    }
    Employee(const Employee &orig) : name(orig.name)
    {
        id = unique++;
    }
    Employee &operator=(const Employee &orig)
    {
        name = orig.name;
        id = orig.id;
    }
private:
    std::string name;
    int id;
    static int unique;
};
int Employee::unique = 10;

#endif //CPP_PRIMER_EMPLOYEE_H

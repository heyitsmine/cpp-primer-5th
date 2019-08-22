//
// Created by hs on 2019/8/22.
//

#ifndef CPP_PRIMER_7_9_H
#define CPP_PRIMER_7_9_H

#include <string>
#include <iostream>

struct Person {
    std::string name;
    std::string address;

    std::string const &getName() const {
        return name;
    }

    std::string const &getAddress() const {
        return address;
    }
};

std::istream &read(std::istream &is, Person &person) {
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person) {
    os << person.name << " " << person.address;
    return os;
}

#endif //CPP_PRIMER_7_9_H

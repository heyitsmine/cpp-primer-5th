//
// Created by hs on 2019/8/26.
//

#ifndef CPP_PRIMER_7_50_H
#define CPP_PRIMER_7_50_H
#include <string>
#include <iostream>

class Person {
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);
private:
    std::string name;
    std::string address;
public:
    Person() = default;
    Person(const std::string &sname) : name(sname) {}
    Person(const std::string &sname, const std::string &saddress) : name(sname), address(saddress) {}
    explicit Person(std::istream &is) {
        read(is, *this);
    }
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
#endif //CPP_PRIMER_7_50_H

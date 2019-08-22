//
// Created by hs on 2019/8/22.
//

#ifndef CPP_PRIMER_PERSON_H
#define CPP_PRIMER_PERSON_H
#include <string>

class Person{
    std::string name;
    std::string address;
    std::string getName() const {
        return name;
    }
    std::string getAddress() const {
        return address;
    }
};
#endif //CPP_PRIMER_PERSON_H

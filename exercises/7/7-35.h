//
// Created by hs on 2019/8/25.
//

#ifndef CPP_PRIMER_7_35_H
#define CPP_PRIMER_7_35_H

#include <string>

typedef std::string Type;
Type initVal(); // use `string`
class Exercise {
public:
    typedef double Type;
    Type setVal(Type); // use `double`
    Type initVal(); // use `double`
private:
    int val;
};

Exercise::Type Exercise::setVal(Type parm) {  // first is `string`, second is `double`
    val = parm + initVal();     // Exercise::initVal()
    return val;
}
#endif //CPP_PRIMER_7_35_H

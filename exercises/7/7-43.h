//
// Created by hs on 2019/8/26.
//

#ifndef CPP_PRIMER_7_43_H
#define CPP_PRIMER_7_43_H

class NoDefault {
public:
    NoDefault(int i) : val(i) {}
private:
    int val;
};

class C {
public:
    C() : no(0){}
private:
    NoDefault no;
};

#endif //CPP_PRIMER_7_43_H

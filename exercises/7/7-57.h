//
// Created by hs on 2019/8/26.
//

#ifndef CPP_PRIMER_7_57_H
#define CPP_PRIMER_7_57_H

#include <string>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif //CPP_PRIMER_7_57_H

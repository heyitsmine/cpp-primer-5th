//
// Created by hs on 2019/8/22.
//

#ifndef CPP_PRIMER_7_14_H
#define CPP_PRIMER_7_14_H
#include <iostream>
#include <string>

struct Sales_data;
std::istream &read(std::istream &, Sales_data &);

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data() : bookNo(""), units_sold(0), revenue(0) {};
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) :
            bookNo(s), units_sold(n), revenue(n * p) {}
    Sales_data(std::istream &){
        read(std::cin, *this);
    }
    Sales_data &combine(const Sales_data &rhs);

    std::string const &isbn() const {
        return bookNo;
    }
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, Sales_data &item) {
    os << item.bookNo << " " << item.units_sold << " " << item.revenue;
    return os;
}
#endif //CPP_PRIMER_7_14_H

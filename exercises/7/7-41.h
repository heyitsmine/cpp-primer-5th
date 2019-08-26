//
// Created by hs on 2019/8/26.
//

#ifndef CPP_PRIMER_7_41_H
#define CPP_PRIMER_7_41_H

#include <iostream>
#include <string>

class Sales_data{
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, Sales_data &item);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const { return revenue / units_sold; }

public:
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) {
        std::cout << "Sales_data(const std::string &s, unsigned n, double p)" << std::endl;
    }

    Sales_data() : Sales_data("", 0, 0) {
        std::cout << "Sales_data()" << std::endl;
    };

    Sales_data(const std::string &s) : Sales_data(s, 0, 0) {
        std::cout << "Sales_data(const std::string &s)" << std::endl;
    }

    Sales_data(std::istream &) : Sales_data() {
        read(std::cin, *this);
        std::cout << "Sales_data(std::istream &)" << std::endl;
    }
    Sales_data &combine(const Sales_data &rhs);
    std::string const &isbn() const {
        return bookNo;
    }
};

// member function
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// friend function
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

#endif //CPP_PRIMER_7_41_H

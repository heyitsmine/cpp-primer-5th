//
// Created by hs on 2019/9/27.
//
#include <iostream>
using std::ostream; using std::endl; using std::cout;
#include "Quote.h"
#include "Bulk_quote.h"
#include "Limited_quote.h"

double print_total(ostream &os, const Quote &item, size_t n)
{
    // depending on the type of the object bound to the item parameter
    // calls either Quote::net_price or Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() // calls Quote::isbn
       << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main()
{
    Quote book1("1001", 24);
    Bulk_quote book2("1002", 24, 10, 0.2);
    Limited_quote book3("1002", 24, 10, 0.2);
    print_total(cout, book1, 10);
    print_total(cout, book2, 10);
    print_total(cout, book3, 11);
    int a = 10;
    int b[a];
    return 0;
}

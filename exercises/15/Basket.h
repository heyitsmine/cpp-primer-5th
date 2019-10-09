//
// Created by hs on 2019/10/8.
//

#ifndef CPP_PRIMER_BASKET_H
#define CPP_PRIMER_BASKET_H

#include "Quote.h"
#include <set>
#include <memory>

class Basket {
public:
    // copy verison
    void add_item(const Quote &sale)
    { items.insert(std::shared_ptr<Quote>(sale.clone())); }

    // move version
    void add_item(Quote &&sale)
    { items.insert(std::shared_ptr<Quote>(std::move(sale).clone())); }

    double total_receipt(std::ostream &os) const;

private:

    // function to compare needed by the multiset member
    static bool compare(const std::shared_ptr<Quote> &lhs,
                        const std::shared_ptr<Quote> &rhs)
    { return lhs->isbn() < rhs->isbn(); }

    // hold multiple quotes, ordered by the compare member
    std::multiset<std::shared_ptr<Quote>, decltype(compare) *>
            items{compare};
};


#endif //CPP_PRIMER_BASKET_H

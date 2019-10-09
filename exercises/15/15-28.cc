//
// Created by hs on 2019/10/8.
//

#include <iostream>
#include <vector>
#include <memory>
#include "Quote.h"
#include "Bulk_quote.h"
using std::vector;
using std::shared_ptr; using std::make_shared;
using std::cout; using std::endl;

int main()
{

    vector<shared_ptr<Quote>> vec;
    vec.push_back(make_shared<Bulk_quote>("book", 50, 12, 0.3));
    auto q = vec[0];
    auto res = q->net_price(20);
    cout << res << endl;
    return 0;
}

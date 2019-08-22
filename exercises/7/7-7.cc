//
// Created by hs on 2019/8/22.
//
#include <iostream>
#include <string>
#include "7-6.h"

using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (read(cin, total)) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (read(cin, trans)) {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn()) {
                // update the running total
                total.combine(trans);
            } else {
                // print results for the previous book
                cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;  // total now refers to the next book
            }
        }
        // print the last transaction
        print(cout, total);
    } else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1;  // indicate failure
    }
    return 0;
}
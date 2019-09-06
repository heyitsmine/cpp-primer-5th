//
// Created by hs on 2019/8/28.
//

#include "7/Sales_data.h"
#include <iostream>
#include <fstream>
#include <string>
using std::cin; using std::cout; using std::cerr; using std::endl;
using std::ifstream; using std::ofstream;
using std::string;

int main(int argc, char **argv)
{
    // string filename("/home/hs/CLionProjects/cpp-primer/examples/8/data/add_item");
    ifstream in(argv[1]);
    ofstream out(argv[2], ofstream::app);

    Sales_data total;         // variable to hold the running sum
    if (read(in, total)) {  // read the first transaction
        Sales_data trans;     // variable to hold data for the next transaction
        while (read(in, trans)) {      //  read the remaining transactions
            if (total.isbn() == trans.isbn())   // check the isbns
                total.combine(trans);  // update the running total
            else {
                print(out, total) << endl;  // print the results
                total = trans;               // process the next book
            }
        }
        print(out, total) << endl;          // print the last transaction
    } else {                                 // there was no input
        cerr << "No data?!" << endl;         // notify the user
    }
}

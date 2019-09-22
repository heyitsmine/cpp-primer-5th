//
// Created by hs on 2019/9/16.
//

#ifndef CPP_PRIMER_QUERYRESULT_H
#define CPP_PRIMER_QUERYRESULT_H

#include "TextQuery.h"
#include <utility>
#include "exercises/13/StrVec.h"

class QueryResult {
    friend std::ostream &print(std::ostream &os, const QueryResult &qr);
public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<TextQuery::line_no>> p,
                std::shared_ptr<StrVec> f) :
            sought(s), lines(p), file(f) {}

    std::set<TextQuery::line_no>::iterator begin() { return lines->begin(); }
    std::set<TextQuery::line_no>::iterator end() { return lines->end(); }
    std::shared_ptr<StrVec> get_file() { return file; }
private:
    std::string sought;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
    std::shared_ptr<StrVec> file;
};

#endif //CPP_PRIMER_QUERYRESULT_H
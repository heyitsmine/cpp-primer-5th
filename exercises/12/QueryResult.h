//
// Created by hs on 2019/9/16.
//

#ifndef CPP_PRIMER_QUERYRESULT_H
#define CPP_PRIMER_QUERYRESULT_H

#include "TextQuery.h"
#include <utility>

class QueryResult {
    friend std::ostream &print(std::ostream &os, const QueryResult &qr);
public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<TextQuery::line_no>> p,
                std::shared_ptr<StrBlob> f) :
            sought(s), lines(p), file(f) {}

    std::set<TextQuery::line_no>::iterator begin() { return lines->begin(); }
    std::set<TextQuery::line_no>::iterator end() { return lines->end(); }
    std::shared_ptr<StrBlob> get_file() { return file; }
private:
    std::string sought;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
    std::shared_ptr<StrBlob> file;
};

#endif //CPP_PRIMER_QUERYRESULT_H
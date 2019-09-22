//
// Created by hs on 2019/9/16.
//

#ifndef CPP_PRIMER_TEXTQUERY_H
#define CPP_PRIMER_TEXTQUERY_H

#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <memory>
#include <cctype>
#include "exercises/13/StrVec.h"

class QueryResult;
class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;
    explicit TextQuery(std::ifstream &infile);
    QueryResult query(std::string &) const;

private:
    std::shared_ptr<StrVec> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

#endif //CPP_PRIMER_TEXTQUERY_H

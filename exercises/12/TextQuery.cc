//
// Created by hs on 2019/9/16.
//

#include "TextQuery.h"
#include "QueryResult.h"

TextQuery::TextQuery(std::ifstream &infile) : file(new StrVec)
{
    std::string buf;
    while (getline(infile, buf)) {
        file->push_back(buf);
        int n = file->size() - 1;
        std::istringstream instr(buf);
        std::string word;
        while (instr >> word) {
            for (auto iter = word.begin(); iter != word.end();) {
                if (isalnum(*iter)) {
                    *iter = std::tolower(*iter);
                    iter++;
                } else
                    iter = word.erase(iter);
            }
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new std::set<line_no>);
            lines->insert(n);
        }
    }
}

QueryResult TextQuery::query(std::string &sought) const
{
    static std::shared_ptr<std::set<TextQuery::line_no >> nodata(new std::set<TextQuery::line_no>);
    auto loc = wm.find(sought);
    if(loc == wm.end())
        return QueryResult(sought, nodata, file);
    else
        return QueryResult(sought, loc->second, file);
}
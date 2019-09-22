//
// Created by hs on 2019/9/19.
//

#ifndef CPP_PRIMER_FOLDER_H
#define CPP_PRIMER_FOLDER_H

#include <set>
#include "Message.h"
class Message;
class Folder {
    friend void swap(Folder &, Folder &);
    friend class Message;
public:
    Folder() = default;
    Folder(const Folder &);
    Folder& operator=(const Folder &);
    ~Folder();

    void swap(Folder &);
    void print_debug();

private:
    std::set<Message*> msgs;

    void add_to_Message(const Folder&);
    void remove_from_Message();

    void remMsg(Message *);
    void addMsg(Message *);
};


#endif //CPP_PRIMER_FOLDER_H

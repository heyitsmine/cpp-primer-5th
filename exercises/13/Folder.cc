//
// Created by hs on 2019/9/19.
//

#include "Folder.h"
#include <iostream>

void Folder::remMsg(Message *msg)
{
    msgs.erase(msg);
}

void Folder::addMsg(Message *msg)
{
    msgs.insert(msg);
}

void Folder::add_to_Message(const Folder &f)
{
    for (auto m : f.msgs)
        m->addFldr(this);
}

Folder::Folder(const Folder &f)
        : msgs(f.msgs)
{
    add_to_Message(f);
}

void Folder::remove_from_Message()
{
    for (auto m : msgs)
        m->remFldr(this);
}

Folder::~Folder()
{
    remove_from_Message();
}

Folder &Folder::operator=(const Folder &rhs)
{
    remove_from_Message();
    msgs = rhs.msgs;
    add_to_Message(rhs);
    return *this;
}

void Folder::print_debug()
{
    for (auto m : msgs)
        std::cout << m->contents << " ";
    std::cout << std::endl;
}

void Folder::swap(Folder &rhs)
{
    using std::swap;
    remove_from_Message();
    rhs.remove_from_Message();

    swap(msgs, rhs.msgs);

    add_to_Message(*this);
    rhs.add_to_Message(rhs);
}

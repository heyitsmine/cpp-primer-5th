//
// Created by hs on 2019/9/19.
//

#include "Message.h"

void Message::remove_from_Folders()
{
    for (auto f:folders)
        f->remMsg(this);
}

void Message::add_to_Folders(const Message &msg)
{
    for (auto f:msg.folders)
        f->addMsg(this);
}

Message::~Message()
{
    remove_from_Folders();
}

Message::Message(const Message &msg)
        : contents(msg.contents), folders(msg.folders)
{
    add_to_Folders(msg);
}

Message &Message::operator=(const Message &msg)
{
    remove_from_Folders();
    contents = msg.contents;
    folders = msg.folders;
    add_to_Folders(msg);
    return *this;
}

void Message::save(Folder &f)
{
    f.addMsg(this);
    addFldr(&f);
}

void Message::remove(Folder &f)
{
    f.remMsg(this);
    remFldr(&f);
}

void Message::swap(Message &rhs)
{
    using std::swap;
    remove_from_Folders();
    rhs.remove_from_Folders();
    swap(contents, rhs.contents);
    swap(folders, rhs.folders);
    add_to_Folders(*this);
    rhs.add_to_Folders(rhs);
}

void swap(Message &lhs, Message &rhs)
{
    lhs.swap(rhs);
}

void Message::move_Folder(Message *msg)
{
    folders = std::move(msg->folders);
    for (auto f : folders) {
        f->remMsg(msg);
        f->addMsg(this);
    }
    msg->folders.clear();
}

Message::Message(Message &&rhs):contents(std::move(rhs.contents))
{
    move_Folder(&rhs);
}

Message &Message::operator=(Message &&rhs)
{
    if (this != &rhs) {
        remove_from_Folders();
        contents = std::move(rhs.contents);
        move_Folder(&rhs);
    }
    return *this;
}

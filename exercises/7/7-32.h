//
// Created by hs on 2019/8/25.
//

#ifndef CPP_PRIMER_7_32_H
#define CPP_PRIMER_7_32_H

#include <string>
#include <iostream>
#include <vector>

class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex i);

private:
    std::vector<Screen> screens;
};

class Screen {
    friend void Window_mgr::clear(ScreenIndex i);

public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    char get() const  {
        return contents[cursor];
    }
    char get(pos, pos) const;
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &move(pos, pos);
    Screen &display(std::ostream &os) {
        do_display(os);
        return *this;
    }
    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {
        os << contents;
    }
};

inline char Screen::get(Screen::pos ht, Screen::pos wd) const {
    pos row = ht * width;
    return contents[row + wd];
}

inline Screen &Screen::move(Screen::pos r, Screen::pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char c) {
    pos row = r * width;
    contents[row + col] = c;
    return *this;
}

inline void Window_mgr::clear(Window_mgr::ScreenIndex i) {
    if (i > screens.size())
        return;
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
    return;
}

#endif //CPP_PRIMER_7_32_H

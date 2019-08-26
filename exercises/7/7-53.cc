//
// Created by hs on 2019/8/26.
//

class Debug {
public:
    constexpr Debug(bool b = true): hw(b), io(b), other(b) {
    }
    constexpr Debug(bool h, bool i, bool o):
            hw(h), io(i), other(o) {
    }
    constexpr bool any() { return hw || io || other; }
    void set_io(bool b) { io = b; }
    void set_hw(bool b) { hw = b; }
    void set_other(bool b) { hw = b; }
private:
    bool hw;    // hardware errors other than IO errors
    bool io;    // IO errors
    bool other; // other errors
};

int main()
{
    Debug io_sub(false, true, false);
    io_sub.set_hw(true);
    return 0;
}

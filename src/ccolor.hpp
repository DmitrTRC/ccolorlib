#ifndef CONSOLE_COLOR_H
#define CONSOLE_COLOR_H

#include <iostream>



namespace Color {
    enum Code {
        FG_RED = 31,
        FG_GREEN = 32,
        FG_PINK = 33,
        FG_PURPLE = 35,
        FG_BLUE = 34,
        FG_DEFAULT = 39,
        BG_RED = 41,
        BG_GREEN = 42,
        BG_PIK = 43,
        BG_BLUE = 44,
        BG_PURPLE = 45,
        BG_DEFAULT = 49,
        SLOW_BLINK = 5,
        FAST_BLINK = 6,
        RESET = 0

    };

    class Modifier {
        Code code;
    public:
        explicit Modifier (Code pCode) : code (pCode) {}

        friend std::ostream &operator<< (std::ostream &os, const Modifier &mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
}

#endif //CONSOLE_COLOR_H
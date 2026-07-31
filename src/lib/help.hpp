#ifndef HELP_HPP
#define HELP_HPP

#include <iostream>
#include <format>
inline void phelp(void) {
    auto help = std::format(R"(help:
-v          Prints the current version
-h          Prints this help screen
)");

    std::cout<<help;
    return;
}

#endif//HELP_HPP

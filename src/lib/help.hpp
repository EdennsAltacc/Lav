#ifndef HELP_HPP
#define HELP_HPP

#include <iostream>
#include <format>
inline void phelp(void) {
    auto help = std::format(R"(help:\n
-v          Prints the current version\n
-h          Prints this help screen\n
)");

    std::cout<<help<<std::endl;
    return;
}

#endif//HELP_HPP

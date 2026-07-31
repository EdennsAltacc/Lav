#include <iostream>
#include <cstdlib>
#include <cstring>

#include "library.hpp"

/* Macros */

#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif

#define LAV_CFG_VERSION "1.0.0"

/* Functions */

static void err( const char *m ) {
    std::cerr<<m<<std::endl;
    std::exit(EXIT_FAILURE);
}

/* Main */
int main(int argc, char *argv[]) {
    if (argc >= 2) {
        if (std::strcmp(argv[1], "-h") == 0) {
            phelp();
            return 0;
        } else if (std::strcmp(argv[1], "-v") == 0) {
            try {
                std::cout<<LAV_CFG_VERSION<<std::endl;
            } catch (...) {
                err("Failed to log LAV_CFG_VERSION");
                return 1;
            }
            
            return 0;
        }
    } else {phelp(); return 1;}
}       


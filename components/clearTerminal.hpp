#ifndef CLEARTERMINAL_HPP
#define CLEARTERMINAL_HPP

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <cstdlib>
#endif

void clearTerminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

#endif
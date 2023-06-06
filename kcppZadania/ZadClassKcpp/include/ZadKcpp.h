#ifndef ZadKcpp_H
#define ZadKcpp_H

#include "Funkcje.h"
#include "WeWy.h"

class ZadKcpp
{
public:
    ZadKcpp();
    void run();
    int showMenu();
    void showFunkcje();
    void showWeWy();
    void showOptionError();

private:
    Funkcje funkcje;
    WeWy wewy;
};

#endif
#include "../include/ZadKcpp.h"
#include <iostream>

using namespace std;

ZadKcpp::ZadKcpp()
{
}

void ZadKcpp::run()
{
start:
    int menuOption = showMenu();
    if (menuOption == 0)
        goto exit;
    else if (menuOption == 1)
        showFunkcje();
    else if (menuOption == 2)
        showWeWy();
    else
        showOptionError();
    goto start;
exit:
}

int ZadKcpp::showMenu()
{
    int option;

    cout << " Podsumowanie zadan \t Aleksander Heese 2023" << endl;
    cout << "  1. Zadania 2.* 'Zwracanie przez funkcje'" << endl;
    cout << "  2. Zadania 4.* 'Operacje wejscia/wyjscia'" << endl;
    cout << "  0. Wyjscie" << endl;
    cout << "  Wpisz numer opcji: ";
    cin >> option;

    return option;
}

void ZadKcpp::showFunkcje()
{
    Funkcje funkcje = Funkcje();

    int option = NULL;
    while (option == NULL || option != 0)
    {
        cout << " Zadania 2.* 'Zwracanie przez funkcje'" << endl;
        cout << "  1. ZadZwracanie \t Zadanie 2.1" << endl;
        cout << "  2. ZadPrzekazywanieTablic \t Zadanie 2.2" << endl;
        cout << "  3. ZadPrzekazywanieTablicKopia \t Zadanie 2.3" << endl;
        cout << "  0. Wyjscie" << endl;
        cout << "  Wpisz numer opcji: ";
        cin >> option;

        if (option == 1)
            funkcje.FirstTask();
        else if (option == 2)
            funkcje.SecondTask();
        else if (option == 3)
            funkcje.ThirdTask();
        else if (option != 0)
            showOptionError();
    }
}

void ZadKcpp::showWeWy()
{
    WeWy wewy = WeWy();

    int option = NULL;
    while (option == NULL || option != 0)
    {
        cout << " Zadania 4.* 'Operacje wejscia/wyjscia'" << endl;
        cout << "  1. ZadParzystaCase \t Zadanie 4.4" << endl;
        cout << "  2. ZadPetle \t Zadanie 4.5" << endl;
        cout << "  0. Wyjscie" << endl;
        cout << "  Wpisz numer opcji: ";
        cin >> option;

        if (option == 1)
            wewy.FourthTask();
        else if (option == 2)
            wewy.FifthTask();
        else if (option != 0)
            showOptionError();
    }
}

void ZadKcpp::showOptionError()
{
    cout << " Nie mozna wybrac tej opcji" << endl;
}
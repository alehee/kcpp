#include "WeWy.h"
#include <iostream>

using namespace std;

WeWy::WeWy()
{
}

bool WeWy::isEvenBit(int a)
{
    return (!(a & 1));
}

bool WeWy::isEvenModulo(int a)
{
    return a % 2 == 0;
}

bool WeWy::isEvenConditional(int a)
{
    return a % 2 == 0 ? true : false;
}

void WeWy::FourthTask()
{
    cout << " ZadParzystaCase \t Zadanie 4.4 \t Aleksander Heese 2023" << endl;
    cout << " Opcje: 1. bitowo, 2. modulo, 3. warunkowo" << endl;

    int x, opcja;
    cout << " Podaj liczbe: ";
    cin >> x;
    cout << " Podaj opcje: ";
    cin >> opcja;

    switch (opcja)
    {
    case 1:
        cout << " Bitowo: " << isEvenBit(x) << endl;
        break;

    case 2:
        cout << " Modulo: " << isEvenModulo(x) << endl;
        break;

    case 3:
        cout << " Warunkowo: " << isEvenConditional(x) << endl;
        break;

    default:
        cout << " Brak takiej opcji" << endl;
        break;
    }
}

void WeWy::loopWhile()
{
    int a = 0;
    cout << " Petla while dla a++" << endl;
    while (a++ < 5)
    {
        cout << "a=" << a << endl;
    }

    a = 0;
    cout << " Petla while dla ++a" << endl;
    while (++a < 5)
    {
        cout << "a=" << a << endl;
    }
}

void WeWy::loopDoWhile()
{
    int a = 0;
    cout << " Petla do-while dla a++" << endl;
    do
    {
        cout << "a=" << a << endl;
    } while (a++ < 5);

    a = 0;
    cout << " Petla do-while dla ++a" << endl;
    do
    {
        cout << "a=" << a << endl;
    } while (++a < 5);
}

void WeWy::loopFor()
{
    int a = 0;
    cout << " Petla for dla a++" << endl;
    for (a = 0; a < 5; a++)
    {
        cout << "a=" << a << endl;
    }

    a = 0;
    cout << " Petla for dla ++a" << endl;
    for (a = 0; a < 5; ++a)
    {
        cout << "a=" << a << endl;
    }
}

void WeWy::FifthTask()
{
    cout << " ZadPetle \t Zadanie 4.5 \t Aleksander Heese 2023" << endl;
    cout << " Kazda petla jest testowana z a=0 i warunkiem a<5" << endl;

    loopWhile();
    loopDoWhile();
    loopFor();
}
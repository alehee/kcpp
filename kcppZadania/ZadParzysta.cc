#include <iostream>

using namespace std;

bool isEvenBit(int a)
{
    /*
    dla a = 5
    5 = 00000101
    1 = 00000001
    jeśli na 1 bicie liczba x ma jedynkę wtedy zwróci true, inaczej false
    */
    return (!(a & 1));
}

bool isEvenModulo(int a)
{
    return a % 2 == 0;
}

bool isEvenConditional(int a)
{
    return a % 2 == 0 ? true : false;
}

int main()
{
    cout << " ZadParzysta \t Zadanie 4.3 \t Aleksander Heese 2023" << endl;

    int x = 5;

    cout << " Sprawdzanie dla liczby " << x << endl;
    cout << " Bitowo: " << isEvenBit(x) << endl;
    cout << " Modulo: " << isEvenModulo(x) << endl;
    cout << " Warunkowo: " << isEvenConditional(x) << endl;

    return 0;
}
#include <iostream>

using namespace std;

#define SQR(a) (a * a)
#define LICZBA 5
#define STRING(str) #str
#define POLACZ(str1, str2) str1 ## str2

int sqr(int a)
{
    return a * a;
}

int main()
{
    cout << " ZadPreprocesor \t Zadanie 4.7 \t Aleksander Heese 2023" << endl;

#ifdef SQR
    cout << " Uzycie makra sqr: " << SQR(LICZBA) << endl;
#else
    cout << " Brak makra" << endl;
#endif

#ifndef SQR
    cout << " Liczenie reczne: " << sqr(LICZBA) << endl;
#endif

    cout << " Wykorzystanie makra z #: " << STRING('a') << endl;
    cout << " Wykorzystanie makra z ##: " << POLACZ("lubie", "placki") << endl;

    return 0;
}
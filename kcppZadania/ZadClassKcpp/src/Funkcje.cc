#include "Funkcje.h"
#include <iostream>

using namespace std;

Funkcje::Funkcje()
{
}

int Funkcje::byValue(int a)
{
    return a + 2;
}

int &Funkcje::byReference(int a)
{
    a += 2;
    return a;
}

int *Funkcje::byPointer(int a)
{
    a += 2;
    return &a;
}

int *Funkcje::byArray(int a)
{
    int r[2];
    r[0] = a;
    r[1] = a + 2;
    return r;
}

void Funkcje::FirstTask()
{
    cout << " ZadZwracanie \t Zadanie 2.1 \t Aleksander Heese 2023" << endl;

    cout << " byValue result: " << byValue(2) << endl;
    cout << " byReference result: " << byValue(2) << endl;
    cout << " byPointer result: " << byValue(2) << endl;
    cout << " byArray result: " << byValue(2) << endl;
}

void Funkcje::displayArray(int vals[])
{
    for (int i = 0; i <= sizeof(vals); i++)
    {
        cout << " element " << i << ": " << vals[i] << endl;
    }
}

void Funkcje::SecondTask()
{
    cout << " ZadPrzekazywanieTablic \t Zadanie 2.2 \t Aleksander Heese 2023" << endl;

    int vals[5] = {3, 6, 9, 12, 15};
    displayArray(vals);
}

void Funkcje::copyArray(int vals[], int cVals[])
{
    for (int i = 0; i <= sizeof(vals); i++)
    {
        cVals[i] = vals[i] + 1;
    }
}

void Funkcje::printArray(int vals[])
{
    for (int i = 0; i <= sizeof(vals); i++)
    {
        cout << " element " << i << ": " << vals[i] << endl;
    }
}

void Funkcje::ThirdTask()
{
    cout << " ZadPrzekazywanieTablicKopia \t Zadanie 2.3 \t Aleksander Heese 2023" << endl;

    int vals[5] = {3, 6, 9, 12, 15};
    int copiedVals[sizeof(vals) + 1];
    copyArray(vals, copiedVals);

    cout << " Oryginalna tablica:" << endl;
    printArray(vals);

    cout << " Skopiowana tablica:" << endl;
    printArray(copiedVals);
}
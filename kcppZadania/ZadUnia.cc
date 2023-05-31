#include <iostream>

using namespace std;

union Test
{
    int a;
    int b;
    int c;
};

int main()
{
    cout << " ZadUnia \t Zadanie 5.3 \t Aleksander Heese 2023" << endl;
    Test t;
    t.a = 2;
    t.b = 3;
    t.c = 4;

    /*  Przy uniach trzeba dokładnie wiedzieć jakiego typu jest dana zmienna
        Brak konstruktora
    */

    return 0;
}
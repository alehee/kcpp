#include <iostream>

using namespace std;

int main()
{
    cout << " ZadAdresowaniePamieci \t Zadanie 3.1 \t Aleksander Heese 2023" << endl;

    /* Ades zmiennej może być otrzymany poprzez zastosowanie operatora & */
    /* Każda zmienna zajmuje miejsce w pamięci przydzielane przez system operacyjny */

    int a = 5;
    cout << " Adres zmiennej a: " << &a << endl;

    return 0;
}
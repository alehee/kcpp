#include <iostream>

using namespace std;

int main()
{
    cout << " ZadIq \t Zadanie 3.2 \t Aleksander Heese 2023" << endl;

    // Określamy element do którego chcemy się dostać
    int i = 0;

    // Tworzymy tablicę oraz wskaźnik na nią
    int arr[3] = { 1,2,3 };
    int *q = arr;

    // i[q] zwaraca nam i-ty element dla tablicy wskaźnika q
    cout << " Wynik i[q] gdzie q to wskaznik na tablice { 1,2,3 }, i=" << i << ", i[q]=" << i[q] << endl;

    return 0;
}
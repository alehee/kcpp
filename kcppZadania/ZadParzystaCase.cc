#include <iostream>

using namespace std;

bool isEvenBit(int a)
{
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

    return 0;
}
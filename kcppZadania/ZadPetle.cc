#include <iostream>

using namespace std;

void loopWhile()
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

void loopDoWhile()
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

void loopFor()
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

int main()
{
    cout << " ZadPetle \t Zadanie 4.5 \t Aleksander Heese 2023" << endl;
    cout << " Kazda petla jest testowana z a=0 i warunkiem a<5" << endl;

    loopWhile();
    loopDoWhile();
    loopFor();

    return 0;
}
#include <iostream>

using namespace std;

int byValue(int a);
int &byReference(int a);
int *byPointer(int a);
int *byArray(int a);

int main(int argc, char *argv[])
{
    cout << " ZadZwracanie \t Zadanie 2.1 \t Aleksander Heese 2023" << endl;

    cout << " byValue result: " << byValue(2) << endl;
    cout << " byReference result: " << byValue(2) << endl;
    cout << " byPointer result: " << byValue(2) << endl;
    cout << " byArray result: " << byValue(2) << endl;

    return 0;
}

int byValue(int a)
{
    return a + 2;
}

int &byReference(int a)
{
    a += 2;
    return a;
}

int *byPointer(int a)
{
    a += 2;
    return &a;
}

int *byArray(int a)
{
    int r[2];
    r[0] = a;
    r[1] = a + 2;
    return r;
}
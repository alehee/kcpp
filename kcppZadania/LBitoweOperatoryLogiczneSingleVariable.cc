#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << " LBitoweOperatoryLogiczneSingleVariable \t Zadanie 3.7 \t Aleksander Heese 2023" << endl;

    if (argc != 9)
    {
        cout << " Input data should have only 8 bits separated by space" << endl;
        return 0;
    }

    int k = 0;
    int pos = 7;
    for(int i = 1; i < 9; i++)
    {
        char b = *argv[i];
        if (b == '1')
            k = k | (1 << pos);
        pos--;
    }
    
    cout << " Wynik wprowadzonych bitow: " << k << endl;

    return 0;
}

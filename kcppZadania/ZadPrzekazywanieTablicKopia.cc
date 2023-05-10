#include <iostream>

using namespace std;

void copyArray(int vals[], int cVals[]);
void printArray(int vals[]);

int main(int argc, char *argv[])
{
    cout << " ZadPrzekazywanieTablicKopia \t Zadanie 2.3 \t Aleksander Heese 2023" << endl;

    int vals[5] = {3, 6, 9, 12, 15};
    int copiedVals[sizeof(vals) + 1];
    copyArray(vals, copiedVals);

    cout << " Oryginalna tablica:" << endl;
    printArray(vals);

    cout << " Skopiowana tablica:" << endl;
    printArray(copiedVals);

    return 0;
}

void copyArray(int vals[], int cVals[])
{
    for (int i = 0; i <= sizeof(vals); i++)
    {
        cVals[i] = vals[i] + 1;
    }
}

void printArray(int vals[])
{
    for (int i = 0; i <= sizeof(vals); i++)
    {
        cout << " element " << i << ": " << vals[i] << endl;
    }
}
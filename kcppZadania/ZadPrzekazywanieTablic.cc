#include <iostream>

using namespace std;

void displayArray(int vals[]);

int main(int argc, char *argv[])
{
    cout << " ZadPrzekazywanieTablic \t Zadanie 2.2 \t Aleksander Heese 2023" << endl;

    int vals[5] = {3, 6, 9, 12, 15};
    displayArray(vals);

    return 0;
}

void displayArray(int vals[])
{
    for (int i = 0; i <= sizeof(vals); i++)
    {
        cout << " element " << i << ": " << vals[i] << endl;
    }
}
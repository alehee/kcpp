#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << " ZadCinCoutFile \t Zadanie 4.1 \t Aleksander Heese 2023" << endl;

    cout << " Wypisuje na ekran" << endl;
    cerr << " Wypisuje blad" << endl;

    ofstream ofile("plik.txt");
    ofile << " Dane w pliku" << endl;
    ofile.close();

    ifstream ifile("plik.txt");
    string buffer;
    while (getline(ifile, buffer))
    {
        cout << " Tekst z pliku: " << buffer;
    }

    return 0;
}
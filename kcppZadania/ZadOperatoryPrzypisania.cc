#include <iostream>

using namespace std;

void OperatoryArytmetyczne();
void OperatoryPrzypisania();

int main()
{
    cout << " ZadOperatoryPrzypisania \t Zadanie 3.4 \t Aleksander Heese 2023" << endl;

    OperatoryArytmetyczne();
    OperatoryPrzypisania();

    return 0;
}

void OperatoryArytmetyczne()
{
    int a = 10, b = 6;
    int add = a+b; // dodawanie
    int sub = a-b; // odejmowanie
    int mul = a*b; // mnozenie
    int div = a/b; // dzielenie
    int mod = a%b; // reszta z dzielenia
}

void OperatoryPrzypisania()
{
    int a = 5; // podstawowy
    a += 5; // przypisanie z dodawaniem
    a -= 5; // przypisanie z odejmowaniem
    a *= 2; // przypisanie z mnożeniem
    a /= 2; // przypisanie z dzieleniem
    a %= 2; // przypisanie z modulo
}
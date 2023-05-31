#include <iostream>
#include <cmath>

using namespace std;

class Figura
{
public:
    virtual void Narysuj() = 0;
    virtual float Obwod() = 0;
    virtual float Pole() = 0;
};

class Trojkat : public Figura
{
public:
    int a, b, c, h;

    void Narysuj()
    {
        cout << "Przepis na narysowanie trojkata" << endl;
    }

    void Uzupelnij(int a1, int b1, int c1, int h1)
    {
        a = a1;
        b = b1;
        c = c1;
        h = h1;
    }

    float Obwod()
    {
        return a + b + c;
    }

    float Pole()
    {
        return a * h * 0.5;
    }
};

class Kwadrat : public Figura
{
public:
    int a;

    void Narysuj()
    {
        cout << "Przepis na narysowanie kwadrata" << endl;
    }

    void Uzupelnij(int a1)
    {
        a = a1;
    }

    float Obwod()
    {
        return a * 4;
    }

    float Pole()
    {
        return a * a;
    }
};

class Prostokat : public Figura
{
public:
    int a, b;

    void Narysuj()
    {
        cout << "Przepis na narysowanie prostokata" << endl;
    }

    void Uzupelnij(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    float Obwod()
    {
        return a * 2 + b * 2;
    }

    float Pole()
    {
        return a * b;
    }
};

class Kolo
{
public:
    float Dystans(int x)
    {
        return sqrt(x / 3.14);
    }
};

int main()
{
    cout << " ZadMetodyAbstrakcyjne \t Zadanie 5.6 \t Aleksander Heese 2023" << endl;

    Trojkat *trojkat = new Trojkat();
    trojkat->Uzupelnij(1, 2, 3, 4);
    cout << " Trojkat: obwod=" << trojkat->Obwod() << ", pole=" << trojkat->Pole() << endl;
    Kwadrat *kwadrat = new Kwadrat();
    kwadrat->Uzupelnij(4);
    cout << " Kwadrat: obwod=" << kwadrat->Obwod() << ", pole=" << kwadrat->Pole() << endl;
    Prostokat *prostokat = new Prostokat();
    prostokat->Uzupelnij(4, 2);
    cout << " Prostokat: obwod=" << prostokat->Obwod() << ", pole=" << prostokat->Pole() << endl;
    Kolo *kolo = new Kolo();
    cout << " Dystans kola: " << kolo->Dystans(4) << endl;

    return 0;
}

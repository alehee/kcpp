#include <iostream>

using namespace std;

void Funkcja1();
void Funkcja2();

int main()
{
    cout << " ZadArytmetykaWskaznikow \t Zadanie 3.3 \t Aleksander Heese 2023" << endl;

    Funkcja1();
    Funkcja2();

    return 0;
}

void Funkcja1()
{
    cout << " Funkcja1()" << endl;

    int arr[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
    int *p = arr;

    // Przesuwamy wskaźnik na środek tablicy
    p += 4;
    cout << " Punkt startowy *p=" << *p << ", p=" << p << endl;

    p++;
    cout << " Ruch p++ *p=" << *p << ", p=" << p << endl;

    ++p;
    cout << " Ruch ++p *p=" << *p << ", p=" << p << endl;

    ++*p;
    cout << " Ruch ++*p *p=" << *p << ", p=" << p << endl;

    ++(*p);
    cout << " Ruch ++(*p) *p=" << *p << ", p=" << p << endl;

    ++*(p);
    cout << " Ruch ++*(p) *p=" << *p << ", p=" << p << endl;

    *p++;
    cout << " Ruch *p++ *p=" << *p << ", p=" << p << endl;

    (*p)++;
    cout << " Ruch (*p)++ *p=" << *p << ", p=" << p << endl;

    *(p)++;
    cout << " Ruch *(p)++ *p=" << *p << ", p=" << p << endl;

    *++p;
    cout << " Ruch *++p *p=" << *p << ", p=" << p << endl;

    *(++p);
    cout << " Ruch *(++p) *p=" << *p << ", p=" << p << endl;
}

void Funkcja2()
{
    int a = 0, b = 0, c = 0;
    int index = 1;

    cout << index << ". A, B, C: " << a << ", " << b << ", " << c << endl;
    
    for(int i=1; i<10; i++)
    {
        if(i%3 == 0)
            *(&a) = i*10;
        else if(i%3 == 1)
            *(&b) = i*10;
        else
            *(&c) = i*10;
        
        cout << i+1 << ". A, B, C: " << a << ", " << b << ", " << c << endl;
    }
}
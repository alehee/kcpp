#include <iostream>

using namespace std;

class Test
{
private:
    int x;

public:
    Test()
    {
        cout << " Initialized" << endl;
        x = 5;
    }
    Test(int a) : x(a) {}
    ~Test()
    {
        cout << " Destroyed" << endl;
    }
};

int main()
{
    cout << " ZadKlasaKonstruktor \t Zadanie 5.4 \t Aleksander Heese 2023" << endl;
    Test t1 = Test();
    Test t2 = Test(3);

    return 0;
}
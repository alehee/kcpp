#include <iostream>

using namespace std;

struct Test
{
    int x;
    float y;

    // Tak, można stworzyć konstruktor
    Test(int nx, float ny)
    {
        x = nx;
        y = ny;
    }
};

int main()
{
    cout << " ZadStruct \t Zadanie 5.2 \t Aleksander Heese 2023" << endl;
    Test t = Test(2, 3);
    t.x = 3;
    float _y = t.y;

    return 0;
}
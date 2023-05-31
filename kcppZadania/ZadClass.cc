#include <iostream>

using namespace std;

class Test
{
private:
    int PrivateInt;
    int TwoMore();

    friend int TwoMoreOutside(Test);

public:
    int PublicInt;
    Test(int privI, int pubI, int protI)
    {
        PrivateInt = privI;
        PublicInt = pubI;
        ProtectedInt = protI;
    }

protected:
    int ProtectedInt;
};

int Test::TwoMore()
{
    return PrivateInt + 2;
}

int TwoMoreOutside(Test t)
{
    return t.PrivateInt + t.ProtectedInt + 2;
}

inline void SayHi()
{
    cout << " Hi there!" << endl;
}

int main()
{
    cout << " ZadClass \t Zadanie 5.1 \t Aleksander Heese 2023" << endl;
    Test t = Test(2, 2, 2);
    int a = TwoMoreOutside(t);
    SayHi();

    return 0;
}
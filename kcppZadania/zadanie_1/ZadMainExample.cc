#include <iostream>

using namespace std;

extern "C" int addition(int a, int b);
extern "C" int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);
float percent(int a, int b);

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        cout << " Passed arguments: " << argc - 1 << ", expected 3" << endl;
        cout << " Possible functions: add, sub, mul, div, per" << endl;
        return 0;
    }

    cout << " ZadMainExample \t Zadanie 1.1 \t Aleksander Heese 2023" << endl;
    cout << " Passed arguments: " << argv[1] << ", " << argv[2] << ", " << argv[3] << endl;

    int a, b;
    try
    {
        a = atoi(argv[2]);
        b = atoi(argv[3]);
    }
    catch (exception e)
    {
        cout << " Cannot parse passed numbers" << endl;
        return 0;
    }

    string fun = argv[1];
    if (fun == "add")
        cout << " Addition result: " << addition(a, b) << endl;
    else if (fun == "sub")
        cout << " Subtraction result: " << subtraction(a, b) << endl;
    else if (fun == "mul")
        cout << " Multiplication result: " << multiplication(a, b) << endl;
    else if (fun == "div")
        cout << " Division result: " << division(a, b) << endl;
    else if (fun == "per")
        cout << " Percentage result: " << percent(a, b) << endl;
    else
        cout << " Function not found" << endl;

    return 0;
}

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

float division(int a, int b)
{
    return (float)a / (float)b;
}

float percent(int a, int b)
{
    return (float)a / (float)b * 100;
}
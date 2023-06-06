#ifndef Funkcje_H
#define Funkcje_H

class Funkcje
{
public:
    Funkcje();
    void FirstTask();
    void SecondTask();
    void ThirdTask();

private:
    int byValue(int a);
    int &byReference(int a);
    int *byPointer(int a);
    int *byArray(int a);
    void displayArray(int vals[]);
    void copyArray(int vals[], int cVals[]);
    void printArray(int vals[]);
};

#endif
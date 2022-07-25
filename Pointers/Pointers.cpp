// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Connor Swanson
// Activision Blizzard
// 7/25/2022

#include <iostream>

using namespace std;

void DisplayNumberWValue(int x, int y);
void DisplayNumbersWPtr(int* pA, int* pB);

int main()
{
    int a = 1, b = 2;
    int* ptrA = &a;
    int* ptrB = &b;

    DisplayNumberWValue(a, b);
    DisplayNumbersWPtr(&a, &b);

    cout << "Please enter a number: " << endl;
    cin >> a;

    cout << "Please enter another number: " << endl;
    cin >> b;

    DisplayNumberWValue(a, b);
    DisplayNumbersWPtr(&a, &b);
}


void DisplayNumberWValue(int x, int y)
{
    cout << "Displaying numbers that were accessed by Value: " << endl;
    cout << "A = " << x << endl;
    cout << "B = " << y << endl;
    cout << endl;
}


void DisplayNumbersWPtr(int* pA, int* pB)
{
    cout << "Displaying numbers that were accessed by Pointer: " << endl;
    cout << "A = " << *pA << endl;
    cout << "B = " << *pB << endl;
    cout << endl;
}
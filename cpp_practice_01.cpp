// cpp_practice_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float sum;
    int grn;
    int kopek;

    cout << "Enter the amount of money in grn: ";
    cin >> grn;
    cout << "Enter the amount of money in kopek: ";
    cin >> kopek;
    kopek = kopek % 100;
    sum = grn + kopek / 100.0;
    cout << "The amount of money is " << sum << " grn" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

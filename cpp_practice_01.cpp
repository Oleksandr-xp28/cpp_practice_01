// cpp_practice_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//practice/ex_2

#include <iostream>
#include <windows.h>

void printWithBeep(const std::string& text) {
    std::cout << text << std::endl;
    Beep(500, 300); // �������� ������
    Beep(500, 300); // �������� ������
    Beep(500, 300); // �������� ������
}

int main() {
    SetConsoleOutputCP(65001); // ������������ ������ ������� UTF-8 ��� ���������� ����������� �������

    printWithBeep("Kraj lukomor�a dub zelenyj,");
    printWithBeep("I zolotyj lancyuh na nim:");
    printWithBeep("Shodnya, shonochi kit uchenyj");
    printWithBeep("Na lancyuhu kruzhl�aje tim�");

    return 0;
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

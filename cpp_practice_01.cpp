#include <iostream>
#include <windows.h>

void printTableLine() {
    Beep(500, 300); // Звуковий сигнал
    std::cout << "╔════════════════════════════════════════════╗" << std::endl;
    Beep(500, 300); // Звуковий сигнал
}

void printTableRow(const std::string& value1, const std::string& value2, const std::string& value3, const std::string& value4) {
    Beep(500, 300); // Звуковий сигнал
    std::cout << "║ " << value1 << " ║ " << value2 << " ║ " << value3 << " ║ " << value4 << " ║" << std::endl;
    Beep(500, 300); // Звуковий сигнал
}

int main() {
    SetConsoleOutputCP(65001); // Встановлення кодової сторінки UTF-8 для коректного відображення символів

    printTableLine();
    printTableRow("Pory Roku", "", "", "");
    printTableLine();
    printTableRow("Zyma", "Vesna", "Lito", "Osin");
    printTableLine();

    return 0;
}

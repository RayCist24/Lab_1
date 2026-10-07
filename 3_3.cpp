#include <windows.h>

#include <iostream>
#include <string>

std::string chet(int x) {
    std::string result;
    for (int i = 0; i <= x; i += 2) {
        result += std::to_string(i);
        result += " ";
    }
    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите целое неотрицательное число x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x < 0) {
        std::cout << "Ошибка: число x должно быть неотрицательным.\n";
        return 1;
    }

    std::cout << chet(x) << "\n";
    return 0;
}
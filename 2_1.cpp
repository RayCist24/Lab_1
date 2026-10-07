#include <windows.h>

#include <iostream>

int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите целое число x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << "Модуль числа " << x << " равен " << abs(x) << ".\n";

    return 0;
}
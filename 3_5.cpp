#include <windows.h>

#include <iostream>

int numLen(long x) {
    if (x < 0) {
        x = -x;
    }

    int count = 0;
    do {
        ++count;
        x /= 10;
    } while (x > 0);

    return count;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long x;
    std::cout << "Введите целое число x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << "Количество знаков в числе " << x
        << ": " << numLen(x) << ".\n";
    return 0;
}
#include <windows.h>

#include <iostream>

bool is2Digits(int x) {
    if (x < 0) {
        x = -x;
    }
    return x >= 10 && x <= 99;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите целое число x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (is2Digits(x)) {
        std::cout << "Число " << x << " является двузначным.\n";
    }
    else {
        std::cout << "Число " << x << " не является двузначным.\n";
    }

    return 0;
}
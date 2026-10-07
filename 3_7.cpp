#include <windows.h>

#include <iostream>

void square(int x) {
    for (int row = 0; row < x; ++row) {
        for (int col = 0; col < x; ++col) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите размер квадрата x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x <= 0) {
        std::cout << "Ошибка: размер квадрата должен быть положительным.\n";
        return 1;
    }

    square(x);

    return 0;
}
#include <windows.h>

#include <iostream>

void rightTriangle(int x) {
    for (int row = 1; row <= x; ++row) {
        for (int space = 0; space < x - row; ++space) {
            std::cout << ' ';
        }
        for (int star = 0; star < row; ++star) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите высоту треугольника x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x <= 0) {
        std::cout << "Ошибка: высота треугольника должна быть положительной.\n";
        return 1;
    }

    rightTriangle(x);

    return 0;
}
#include <windows.h>

#include <iostream>

int max3(int x, int y, int z) {
    int result = x;
    if (y > result) {
        result = y;
    }
    if (z > result) {
        result = z;
    }
    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите число x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int y;
    std::cout << "Введите число y: ";
    if (!(std::cin >> y)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int z;
    std::cout << "Введите число z: ";
    if (!(std::cin >> z)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << "Максимум из трёх чисел: " << max3(x, y, z) << ".\n";

    return 0;
}
#include <windows.h>

#include <iostream>

bool isEqual(int a, int b, int c) {
    return a == b && b == c;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a;
    std::cout << "Введите число a: ";
    if (!(std::cin >> a)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int b;
    std::cout << "Введите число b: ";
    if (!(std::cin >> b)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int c;
    std::cout << "Введите число c: ";
    if (!(std::cin >> c)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (isEqual(a, b, c)) {
        std::cout << "Числа равны: " << a << " = " << b << " = " << c << ".\n";
    }
    else {
        std::cout << "Числа не равны: " << a << ", " << b << ", " << c << ".\n";
    }

    return 0;
}
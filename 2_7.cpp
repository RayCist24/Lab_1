#include <windows.h>

#include <iostream>

int sum2(int x, int y) {
    int sum = x + y;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
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

    std::cout << "Результат: " << sum2(x, y) << ".\n";

    return 0;
}
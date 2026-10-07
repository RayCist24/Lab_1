#include <windows.h>

#include <iostream>

bool isInRange(int a, int b, int num) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    return num >= a && num <= b;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a;
    std::cout << "Введите первую границу a: ";
    if (!(std::cin >> a)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int b;
    std::cout << "Введите вторую границу b: ";
    if (!(std::cin >> b)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int num;
    std::cout << "Введите число num: ";
    if (!(std::cin >> num)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (isInRange(a, b, num)) {
        std::cout << "Число " << num << " входит в диапазон ["
            << a << "; " << b << "].\n";
    }
    else {
        std::cout << "Число " << num << " не входит в диапазон ["
            << a << "; " << b << "].\n";
    }

    return 0;
}
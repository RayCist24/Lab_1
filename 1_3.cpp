#include <iostream>

#include <windows.h>

int charToNum(char x) {
    return x - '0';
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char x;
    std::cout << "Введите символ-цифру от '0' до '9': ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x < '0' || x > '9') {
        std::cout << "Ошибка: символ '" << x
            << "' не является цифрой от '0' до '9'.\n";
        return 1;
    }

    std::cout << "Результат: " << charToNum(x) << "\n";

    return 0;
}
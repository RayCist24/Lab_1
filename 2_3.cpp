#include <windows.h>

#include <iostream>

bool is35(int x) {
    bool div3 = (x % 3 == 0);
    bool div5 = (x % 5 == 0);
    return div3 != div5;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите целое число x: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (is35(x)) {
        std::cout << "Число " << x << " делится на 3 или на 5, но не на оба.\n";
    }
    else {
        std::cout << "Число " << x << " не удовлетворяет условию.\n";
    }

    return 0;
}
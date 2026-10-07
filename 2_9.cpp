#include <windows.h>

#include <iostream>
#include <string>

std::string day(int x) {
    switch (x) {
    case 1:
        return "понедельник";
    case 2:
        return "вторник";
    case 3:
        return "среда";
    case 4:
        return "четверг";
    case 5:
        return "пятница";
    case 6:
        return "суббота";
    case 7:
        return "воскресенье";
    default:
        return "это не день недели";
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Введите номер дня недели (1-7): ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << day(x) << "\n";

    return 0;
}
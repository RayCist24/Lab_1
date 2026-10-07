#include <windows.h>

#include <iostream>

int findFirst(int arr[], int x, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int size;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (size <= 0) {
        std::cout << "Ошибка: размер массива должен быть положительным.\n";
        return 1;
    }

    int arr[100];
    std::cout << "Введите " << size << " целых чисел через пробел: ";
    for (int i = 0; i < size; ++i) {
        if (!(std::cin >> arr[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int x;
    std::cout << "Введите число x для поиска: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int index = findFirst(arr, x, size);
    if (index == -1) {
        std::cout << "Число " << x << " не найдено в массиве.\n";
    }
    else {
        std::cout << "Первое вхождение числа " << x
            << " — индекс " << index << ".\n";
    }

    return 0;
}
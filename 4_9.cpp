#include <windows.h>

#include <iostream>

const int kMaxSize = 100;

int* findAll(int arr[], int size, int x, int& count) {
    int* result = new int[size];
    count = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            result[count] = i;
            ++count;
        }
    }

    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int size;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (size <= 0 || size > kMaxSize) {
        std::cout << "Ошибка: размер должен быть от 1 до " << kMaxSize << ".\n";
        return 1;
    }

    int arr[kMaxSize];
    std::cout << "Введите " << size << " элементов arr: ";
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

    int count = 0;
    int* result = findAll(arr, size, x, count);

    if (count == 0) {
        std::cout << "Число " << x << " не найдено в массиве.\n";
    }
    else {
        std::cout << "Индексы вхождений числа " << x << ": [";
        for (int i = 0; i < count; ++i) {
            if (i > 0) {
                std::cout << ", ";
            }
            std::cout << result[i];
        }
        std::cout << "]\n";
    }

    delete[] result;
    return 0;
}
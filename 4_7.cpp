#include <windows.h>

#include <iostream>

const int kMaxSize = 100;

int* reverseBack(int arr[], int size) {
    int* result = new int[size];
    for (int i = 0; i < size; ++i) {
        result[i] = arr[size - 1 - i];
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

    int* result = reverseBack(arr, size);

    std::cout << "Результат: ";
    for (int i = 0; i < size; ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << result[i];
    }
    std::cout << "\n";

    delete[] result;

    return 0;
}
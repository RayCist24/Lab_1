#include <windows.h>

#include <iostream>

const int kMaxSize = 100;

int* add(int arr[], int ins[], int arr_size, int ins_size, int pos) {
    int* result = new int[arr_size + ins_size];

    for (int i = 0; i < pos; ++i) {
        result[i] = arr[i];
    }

    for (int i = 0; i < ins_size; ++i) {
        result[pos + i] = ins[i];
    }

    for (int i = pos; i < arr_size; ++i) {
        result[ins_size + i] = arr[i];
    }

    return result;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int arr_size;
    std::cout << "Введите размер массива arr: ";
    if (!(std::cin >> arr_size)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (arr_size <= 0 || arr_size > kMaxSize) {
        std::cout << "Ошибка: размер arr должен быть от 1 до " << kMaxSize << ".\n";
        return 1;
    }

    int arr[kMaxSize];
    std::cout << "Введите " << arr_size << " элементов arr: ";
    for (int i = 0; i < arr_size; ++i) {
        if (!(std::cin >> arr[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int ins_size;
    std::cout << "Введите размер массива ins: ";
    if (!(std::cin >> ins_size)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (ins_size <= 0 || ins_size > kMaxSize) {
        std::cout << "Ошибка: размер ins должен быть от 1 до " << kMaxSize << ".\n";
        return 1;
    }

    int ins[kMaxSize];
    std::cout << "Введите " << ins_size << " элементов ins: ";
    for (int i = 0; i < ins_size; ++i) {
        if (!(std::cin >> ins[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int pos;
    std::cout << "Введите позицию вставки pos (от 0 до " << arr_size << "): ";
    if (!(std::cin >> pos)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (pos < 0 || pos > arr_size) {
        std::cout << "Ошибка: позиция pos вне допустимого диапазона.\n";
        return 1;
    }

    int* result = add(arr, ins, arr_size, ins_size, pos);
    int result_size = arr_size + ins_size;

    std::cout << "Результат: [";
    for (int i = 0; i < result_size; ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << result[i];
    }
    std::cout << "]\n";

    delete[] result;

    return 0;
}
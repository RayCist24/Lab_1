#include <windows.h>

#include <iostream>

int maxAbs(int arr[], int size) {
    int best = arr[0];
    int best_abs = abs(best);

    for (int i = 1; i < size; ++i) {
        int current_abs = abs(arr[i]);
        if (current_abs > best_abs) {
            best = arr[i];
            best_abs = current_abs;
        }
    }

    return best;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int size;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (size <= 0 || size > 100) {
        std::cout << "Ошибка: размер массива должен быть от 1 до 100.\n";
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

    std::cout << "Наибольшее по модулю значение: " << maxAbs(arr, size) << ".\n";

    return 0;
}
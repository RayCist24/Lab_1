#include <iostream>


#include <clocale>


double fraction(double x) {
    int int_part = static_cast<int>(x);
    return x - int_part;
}

int main() {
    setlocale(LC_ALL, "Russian");


    double x;


    std::cout << "Введите вещественное число: ";
    if (!(std::cin >> x)) {
        std::cout << "Ошибка: некорректный ввод.\n";
        return 1;
    }


    std::cout << "Дробная часть числа " << x << " равна " << fraction(x) << "\n";


    return 0;
}
#include <iostream>
#include <string>

const int kMaxSize = 100;

double fraction(double x) {
    int int_part = static_cast<int>(x);
    return x - int_part;
}

int charToNum(char x) {
    return x - '0';
}

bool is2Digits(int x) {
    if (x < 0) {
        x = -x;
    }
    return x >= 10 && x <= 99;
}

bool isInRange(int a, int b, int num) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    return num >= a && num <= b;
}

bool isEqual(int a, int b, int c) {
    return a == b && b == c;
}

int abs(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

bool is35(int x) {
    bool div3 = (x % 3 == 0);
    bool div5 = (x % 5 == 0);
    return div3 != div5;
}

int max3(int x, int y, int z) {
    int result = x;
    if (y > result) {
        result = y;
    }
    if (z > result) {
        result = z;
    }
    return result;
}

int sum2(int x, int y) {
    int sum = x + y;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
}

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

std::string listNums(int x) {
    std::string result;
    for (int i = 0; i <= x; ++i) {
        result += std::to_string(i);
        result += " ";
    }
    return result;
}

std::string chet(int x) {
    std::string result;
    for (int i = 0; i <= x; i += 2) {
        result += std::to_string(i);
        result += " ";
    }
    return result;
}

int numLen(int x) {
    if (x < 0) {
        x = -x;
    }

    int count = 0;
    do {
        ++count;
        x /= 10;
    } while (x > 0);

    return count;
}

void square(int x) {
    for (int row = 0; row < x; ++row) {
        for (int col = 0; col < x; ++col) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

void rightTriangle(int x) {
    for (int row = 1; row <= x; ++row) {
        for (int space = 0; space < x - row; ++space) {
            std::cout << ' ';
        }
        for (int star = 0; star < row; ++star) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

int findFirst(int arr[], int x, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

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

int* reverseBack(int arr[], int size) {
    int* result = new int[size];
    for (int i = 0; i < size; ++i) {
        result[i] = arr[size - 1 - i];
    }
    return result;
}

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

    std::cout << "Задание 1_1.\n";

    double x_1_1;
    std::cout << "Введите вещественное число: ";
    if (!(std::cin >> x_1_1)) {
        std::cout << "Ошибка: некорректный ввод.\n";
        return 1;
    }

    std::cout << "Дробная часть числа " << x_1_1 << " равна " << fraction(x_1_1) << "\n";

    std::cout << "Задание 1_3.\n";

    char x_1_3;
    std::cout << "Введите символ-цифру от '0' до '9': ";
    if (!(std::cin >> x_1_3)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x_1_3 < '0' || x_1_3 > '9') {
        std::cout << "Ошибка: символ '" << x_1_3
            << "' не является цифрой от '0' до '9'.\n";
        return 1;
    }

    std::cout << "Результат: " << charToNum(x_1_3) << "\n";

    std::cout << "Задание 1_5.\n";

    int x_1_5;
    std::cout << "Введите двузначное целое число x: ";
    if (!(std::cin >> x_1_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (is2Digits(x_1_5)) {
        std::cout << "Число " << x_1_5 << " является двузначным.\n";
    }
    else {
        std::cout << "Число " << x_1_5 << " не является двузначным.\n";
    }

    std::cout << "Задание 1_7.\n";

    int a_1_7;
    std::cout << "Введите первую границу a: ";
    if (!(std::cin >> a_1_7)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int b_1_7;
    std::cout << "Введите вторую границу b: ";
    if (!(std::cin >> b_1_7)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int num_1_7;
    std::cout << "Введите число num: ";
    if (!(std::cin >> num_1_7)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (isInRange(a_1_7, b_1_7, num_1_7)) {
        std::cout << "Число " << num_1_7 << " входит в диапазон ["
            << a_1_7 << "; " << b_1_7 << "].\n";
    }
    else {
        std::cout << "Число " << num_1_7 << " не входит в диапазон ["
            << a_1_7 << "; " << b_1_7 << "].\n";
    }

    std::cout << "Задание 1_9.\n";

    int a_1_9;
    std::cout << "Введите число a: ";
    if (!(std::cin >> a_1_9)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int b_1_9;
    std::cout << "Введите число b: ";
    if (!(std::cin >> b_1_9)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int c_1_9;
    std::cout << "Введите число c: ";
    if (!(std::cin >> c_1_9)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (isEqual(a_1_9, b_1_9, c_1_9)) {
        std::cout << "Числа равны: " << a_1_9 << " = " << b_1_9 << " = " << c_1_9 << ".\n";
    }
    else {
        std::cout << "Числа не равны: " << a_1_9 << ", " << b_1_9 << ", " << c_1_9 << ".\n";
    }

    std::cout << "Задание 2_1.\n";
    
    int x_2_1;
    std::cout << "Введите целое число x: ";
    if (!(std::cin >> x_2_1)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << "Модуль числа " << x_2_1 << " равен " << abs(x_2_1) << ".\n";

    std::cout << "Задание 2_3.\n";
    
    int x_2_3;
    std::cout << "Введите целое число x: ";
    if (!(std::cin >> x_2_3)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (is35(x_2_3)) {
        std::cout << "Число " << x_2_3 << " делится на 3 или на 5, но не на оба.\n";
    }
    else {
        std::cout << "Число " << x_2_3 << " не удовлетворяет условию.\n";
    }

    std::cout << "Задание 2_5.\n";

    int x_2_5;
    std::cout << "Введите число x: ";
    if (!(std::cin >> x_2_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int y_2_5;
    std::cout << "Введите число y: ";
    if (!(std::cin >> y_2_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int z_2_5;
    std::cout << "Введите число z: ";
    if (!(std::cin >> z_2_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << "Максимум из трёх чисел: " << max3(x_2_5, y_2_5, z_2_5) << ".\n";

    std::cout << "Задание 2_7.\n";

    int x_2_7;
    std::cout << "Введите число x: ";
    if (!(std::cin >> x_2_7)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int y_2_7;
    std::cout << "Введите число y: ";
    if (!(std::cin >> y_2_7)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << "Результат: " << sum2(x_2_7, y_2_7) << ".\n";

    std::cout << "Задание 2_9.\n";

    int x_2_9;
    std::cout << "Введите номер дня недели (1-7): ";
    if (!(std::cin >> x_2_9)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << day(x_2_9) << "\n";

    std::cout << "Задание 3_1.\n";

    int x_3_1;
    std::cout << "Введите целое неотрицательное число x: ";
    if (!(std::cin >> x_3_1)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x_3_1 < 0) {
        std::cout << "Ошибка: число x должно быть неотрицательным.\n";
        return 1;
    }

    std::cout << listNums(x_3_1) << "\n";

    std::cout << "Задание 3_3.\n";

    int x_3_3;
    std::cout << "Введите целое неотрицательное число x: ";
    if (!(std::cin >> x_3_3)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x_3_3 < 0) {
        std::cout << "Ошибка: число x должно быть неотрицательным.\n";
        return 1;
    }

    std::cout << chet(x_3_3) << "\n";

    std::cout << "Задание 3_5.\n";

    int x_3_5;
    std::cout << "Введите целое число x: ";
    if (!(std::cin >> x_3_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    std::cout << "Количество знаков в числе " << x_3_5
        << ": " << numLen(x_3_5) << ".\n";
    
    std::cout << "Задание 3_7.\n";

    int x_3_7;
    std::cout << "Введите размер квадрата x: ";
    if (!(std::cin >> x_3_7)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x_3_7 <= 0) {
        std::cout << "Ошибка: размер квадрата должен быть положительным.\n";
        return 1;
    }

    square(x_3_7);

    std::cout << "Задание 3_9.\n";

    int x_3_9;
    std::cout << "Введите высоту треугольника x: ";
    if (!(std::cin >> x_3_9)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (x_3_9 <= 0) {
        std::cout << "Ошибка: высота треугольника должна быть положительной.\n";
        return 1;
    }

    rightTriangle(x_3_9);

    std::cout << "Задание 4_1.\n";

    int size_4_1;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size_4_1)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (size_4_1 <= 0) {
        std::cout << "Ошибка: размер массива должен быть положительным.\n";
        return 1;
    }

    int arr_4_1[size_4_1];
    std::cout << "Введите " << size_4_1 << " целых чисел через пробел: ";
    for (int i = 0; i < size_4_1; ++i) {
        if (!(std::cin >> arr_4_1[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int x_4_1;
    std::cout << "Введите число x для поиска: ";
    if (!(std::cin >> x_4_1)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int index_4_1 = findFirst(arr_4_1, x_4_1, size_4_1);
    if (index_4_1 == -1) {
        std::cout << "Число " << x_4_1 << " не найдено в массиве.\n";
    }
    else {
        std::cout << "Первое вхождение числа " << x_4_1
            << " — индекс " << index_4_1 << ".\n";
    }

    std::cout << "Задание 4_3.\n";

    int size_4_3;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size_4_3)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    if (size_4_3 <= 0 || size_4_3 > 100) {
        std::cout << "Ошибка: размер массива должен быть от 1 до 100.\n";
        return 1;
    }

    int arr_4_3[size_4_3];
    std::cout << "Введите " << size_4_3 << " целых чисел через пробел: ";
    for (int i = 0; i < size_4_3; ++i) {
        if (!(std::cin >> arr_4_3[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    std::cout << "Наибольшее по модулю значение: " << maxAbs(arr_4_3, size_4_3) << ".\n";

    std::cout << "Задание 4_5.\n";

    int arr_size_4_5;
    std::cout << "Введите размер массива arr: ";
    if (!(std::cin >> arr_size_4_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (arr_size_4_5 <= 0 || arr_size_4_5 > kMaxSize) {
        std::cout << "Ошибка: размер arr должен быть от 1 до " << kMaxSize << ".\n";
        return 1;
    }

    int arr_4_5[kMaxSize];
    std::cout << "Введите " << arr_size_4_5 << " элементов arr: ";
    for (int i = 0; i < arr_size_4_5; ++i) {
        if (!(std::cin >> arr_4_5[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int ins_size_4_5;
    std::cout << "Введите размер массива ins: ";
    if (!(std::cin >> ins_size_4_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (ins_size_4_5 <= 0 || ins_size_4_5 > kMaxSize) {
        std::cout << "Ошибка: размер ins должен быть от 1 до " << kMaxSize << ".\n";
        return 1;
    }

    int ins_4_5[kMaxSize];
    std::cout << "Введите " << ins_size_4_5 << " элементов ins: ";
    for (int i = 0; i < ins_size_4_5; ++i) {
        if (!(std::cin >> ins_4_5[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int pos_4_5;
    std::cout << "Введите позицию вставки pos (от 0 до " << arr_size_4_5 << "): ";
    if (!(std::cin >> pos_4_5)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (pos_4_5 < 0 || pos_4_5 > arr_size_4_5) {
        std::cout << "Ошибка: позиция pos вне допустимого диапазона.\n";
        return 1;
    }

    int* result_4_5 = add(arr_4_5, ins_4_5, arr_size_4_5, ins_size_4_5, pos_4_5);
    int result_size_4_5 = arr_size_4_5 + ins_size_4_5;

    std::cout << "Результат: [";
    for (int i = 0; i < result_size_4_5; ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << result_4_5[i];
    }
    std::cout << "]\n";

    delete[] result_4_5;

    std::cout << "Задание 4_7.\n";

    int size_4_7;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size_4_7)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (size_4_7 <= 0 || size_4_7 > kMaxSize) {
        std::cout << "Ошибка: размер должен быть от 1 до " << kMaxSize << ".\n";
        return 1;
    }

    int arr_4_7[size_4_7];
    std::cout << "Введите " << size_4_7 << " элементов arr: ";
    for (int i = 0; i < size_4_7; ++i) {
        if (!(std::cin >> arr_4_7[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int* result_4_7 = reverseBack(arr_4_7, size_4_7);

    std::cout << "Результат: ";
    for (int i = 0; i < size_4_7; ++i) {
        if (i > 0) {
            std::cout << ", ";
        }
        std::cout << result_4_7[i];
    }
    std::cout << "\n";

    delete[] result_4_7;

    std::cout << "Задание 4_9.\n";

    int size_4_9;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size_4_9)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }
    if (size_4_9 <= 0 || size_4_9 > kMaxSize) {
        std::cout << "Ошибка: размер должен быть от 1 до " << kMaxSize << ".\n";
        return 1;
    }

    int arr_4_9[size_4_9];
    std::cout << "Введите " << size_4_9 << " элементов arr: ";
    for (int i = 0; i < size_4_9; ++i) {
        if (!(std::cin >> arr_4_9[i])) {
            std::cout << "Ошибка: введено некорректное значение.\n";
            return 1;
        }
    }

    int x_4_9;
    std::cout << "Введите число x для поиска: ";
    if (!(std::cin >> x_4_9)) {
        std::cout << "Ошибка: введено некорректное значение.\n";
        return 1;
    }

    int count_4_9 = 0;
    int* result_4_9 = findAll(arr_4_9, size_4_9, x_4_9, count_4_9);

    if (count_4_9 == 0) {
        std::cout << "Число " << x_4_9 << " не найдено в массиве.\n";
    }
    else {
        std::cout << "Индексы вхождений числа " << x_4_9 << ": [";
        for (int i = 0; i < count_4_9; ++i) {
            if (i > 0) {
                std::cout << ", ";
            }
            std::cout << result_4_9[i];
        }
        std::cout << "]\n";
    }

    delete[] result_4_9;
    
    return 0;
}
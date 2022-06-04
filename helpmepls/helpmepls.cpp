/* Дано трёхзначное число. Вывести число, полученное при перестановке цифр сотен и десятков исходного числа
  (например, 123 перейдёт в 213)*/

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*
    int number;
    std::cout << "Введите трёхзначное число: ";
    std::cin >> number;
    if (number > 999 or number < 100) {
        std::cout << "Вы ввели не трёхзначное число";
    }
    else {
        std::cout << ((number / 10) % 10 * 100) + ((number / 100) * 10) + number % 10;
    }*/
    int fst;
    int scd;
    int thrd;
    std::cout << "Введите первое число";
    std::cin >> fst;
    std::cout << "Введите второе число";
    std::cin >> scd;
    std::cout << "Введите третье число";
    std::cin >> thrd;
    if (fst == scd * -1 or fst == thrd * -1 or scd == fst * -1 or scd == thrd * -1 or
        thrd == fst * -1 or thrd == scd * -1) {
        std::cout << "Истинно";
    }
    else{
        std::cout << "Ложно";
    }
    return 0;
}

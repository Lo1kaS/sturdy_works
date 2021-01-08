#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Изменение кодировки для отображеня русского языка в консоли:
    system("chcp 1251>nul");
    const double pi = 3.14;
    //Переменные 
    double a;
    //Указание действий 
    cout << "Введите диаметр окружности:";
    //Ввод
    cin >> a;
    //Вывод
    cout << "Cреднее арифметическое:" << pi*a;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Изменение кодировки для отображеня русского языка в консоли:
    system("chcp 1251>nul");
    //Переменные 
    double a, b;
    //Указание действий 
    cout << "Введите a и b:";
    //Ввод
    cin >> a;
    cin >> b;
    //Вывод
    cout << "Сумма модулей чисел a и b:" << abs(a) + abs(b) << endl;
    cout << "Разность модулей чисел a и b:" << abs(a) - abs(b) << endl;
    cout << "Произведени модулей чисел a и b:" << abs(a) * abs(b) << endl;
    cout << "Частное модулей чисел a и b:" << abs(a) / abs(b) << endl;
}
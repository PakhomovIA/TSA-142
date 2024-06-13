
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


/*
@brief Проверяет положительные ли значения 
 * @paramn-число
* @return- значение n
*/
void checkN(const double n);
/*
@brief ввод значений с проверкой
 * @return- числа
*/
doublegetNumber();
/*
@brief табулирует заданную в таблице функцию
 * @paramminValue-минимальное значение функции
 * @parammaxValue-максимальное значение функции
 * @paramstep-шаг
 * @return- выводит таблицу
*/
void printTabFunction(const double minValue,const double maxValue,const double step);
/*
@brief проверяет что минимум меньше максимума
 * @parammin-минимальное значение функции
 * @parammax-максимальное значение функции
* @return- значения
*/
void checkRange(const double min, const double max);
/**
* @breef - главная функция программы
* @return - возвращает 0, если функция выполнена верно, иначе 1.
*/
intmain()
{
cout<< "Введите минимальный предел" ;
double minValue = getNumber();
checkN(minValue);
cout<< "Введите максимальный предел" ;
doublemaxValue = getNumber();
checkN(maxValue);
checkRange(minValue,maxValue);
cout << "Введите шаг" ;
double step = getNumber();
checkN(step);
printTabFunction(minValue, maxValue, step);
return 0;
}


void printTabFunction(const double minValue,const double maxValue,const double step)
{
    cout << setw(10) << "x" << setw(15) << "y" << endl;
    for (double i = minValue; i < maxValue + step; i = i + step)
    {
        double a = 3 * sin (sqrt (i)) + 0.39 * i - 3.8;
        cout << setw(10) << i << setw(15) << a << endl;
    }
}
   double getNumber()
{
    double a;
    cin >> a;
    if (cin.fail())
    {
        cout<<"Incorrect input";
        abort();
    }
    return a;
}

    void checkN(const double n)
{
    if (n <= 0)
    {
        cout<<"Wrong value"<<endl;
        abort();
    }
}
void checkRange(const double min, const double max)
{
    if (min > max)
    {
        cout << "Wrong range entered" << endl;
        abort();
    }
}

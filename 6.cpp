#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>
using namespace std;

/**
 * @brief оператор выбоа способа заполнения массива
 * @param RANDOM = 0 автоматическое заполнение
 * @param MANUALLY =1 ручное заполнение
 */
enum SELECT { RANDOM = 0, MANUALLY = 1 };

/**
 * @brief проверяет размер массива
 * @param n - размер массива
 */
void checkN(const int n);

/**
 * @brief считывает размер массива
 * @return размер массива в беззнаковом типе данных
 */
size_t getSize();

/**
 * @brief считывает значение типа int
 * @return считанное значение целочисленное
 */
int getNumber();

/**
 * @brief вывод массива на экран
 * @param arr - массив
 * @param n - размер массива
 */
void printArray(const int* arr, const int n);

/**
 * @brief заполнение массива автоматически случайнвми числами в заданном диапазоне
 * @param arr - массив
 * @param n - размер массива
 * @param min - минимальное значение диапазона значений элементов массива
 * @param max - максимальное значение диапазона значений элементов массива
 */
void fillArrayRandom(int* arr, const int n, const int min, const int max);

/**
 * @brief проверяет диапазон
 * @param min - минимальное значение диапазона значений элементов массива
 * @param max - максимальное значение диапазона значений элементов массива
 */
void checkRange(const int min, const int max);

/**


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath> // Для std::abs

using namespace std;
/**
* @brief Функция для вывода массива на экран
* @param array указатель на массив
*/

void printArray(const vector<vector<int>>& array);
/**
* @brief Функция для заполнения массива случайными числами
* @param array указатель на массив
*/

void fillArrayWithRandomNumbers(vector<vector<int>>& array);
/**
* @brief Функция для заполнения массива с клавиатуры
* @param array указатель на массив
*/

void fillArrayFromKeyboard(vector<vector<int>>& array) ;
/**
* @brief Функция для замены каждого наибольшего по модулю элемента строки на противоположный по знаку
* @param array указатель на массив
*/

void replaceMaxAbsElement(vector<vector<int>>& array);
/**
* @brief Вставляет после каждой нечетной строки первую строку
* @param array указатель на массив
*/

void insertFirstRowAfterEvenRows(vector<vector<int>>& array);

int main() {
    int n, m;
    char choice;

    cout << "Введите количество строк (n): ";
    cin >> n;
    cout << "Введите количество столбцов (m): ";
    cin >> m;

    // Создание многомерного массива
    vector<vector<int>> array(n, vector<int>(m));

    cout << "Заполнить массив случайными числами (r) или с клавиатуры (k)? ";
    cin >> choice;

    if (choice == 'r' || choice == 'R') {
        fillArrayWithRandomNumbers(array);
    } else if (choice == 'k' || choice == 'K') {
        fillArrayFromKeyboard(array);
    } else {
        cout << "Некорректный выбор. Завершение программы." << endl;
        return 1;
    }

    // Вывод исходного массива
    cout << "Исходный массив:" << endl;
    printArray(array);

    // Предложить пользователю дополнительные действия
    cout << "Выберите действие:\n";
    cout << "1 - Заменить каждый наибольший по модулю элемент строки на противоположный по знаку\n";
    cout << "2 - Вставить после каждой четной строки первую строку\n";
    cout << "Введите номер действия (или любой другой символ для выхода): ";
    cin >> choice;

    if (choice == '1') {
        replaceMaxAbsElement(array);
        cout << "Массив после замены наибольших по модулю элементов на противоположные по знаку:" << endl;
        printArray(array);
    } else if (choice == '2') {
        insertFirstRowAfterEvenRows(array);
        cout << "Массив после вставки первой строки после каждой четной строки:" << endl;
        printArray(array);
    } else {
        cout << "Некорректный выбор. Завершение программы." << endl;
    }

    return 0;
}
void printArray(const vector<vector<int>>& array) {
    for (const auto& row : array) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}
void fillArrayWithRandomNumbers(vector<vector<int>>& array) {
    srand(time(0)); // Инициализация генератора случайных чисел
    for (auto& row : array) {
        for (int& elem : row) {
            elem = rand() % 100; // Случайное число от 0 до 99
        }
    }
}
void fillArrayFromKeyboard(vector<vector<int>>& array) {
    for (auto& row : array) {
        for (int& elem : row) {
            cout << "Введите элемент: ";
            cin >> elem;
        }
    }
}
void replaceMaxAbsElement(vector<vector<int>>& array) {
    for (auto& row : array) {
        if (!row.empty()) {
            // Найти индекс наибольшего по модулю элемента
            int maxIdx = 0;
            for (int i = 1; i < row.size(); ++i) {
                if (abs(row[i]) > abs(row[maxIdx])) {
                    maxIdx = i;
                }
            }
            // Заменить элемент на противоположный по знаку
            row[maxIdx] = -row[maxIdx];
        }
    }
}
void insertFirstRowAfterEvenRows(vector<vector<int>>& array) {
    if (array.empty()) return;

    vector<int> firstRow = array[0]; // Сохранить первую строку
    for (int i = 1; i < array.size(); i += 3) {
        array.insert(array.begin() + i + 1, firstRow);
    }
}

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
void copyVector(vector<vector<int>>&lmn, const vector<vector<int>>&rmn);
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
    switch (choice) {
        case 'r': // Заполнение случайными числами
              fillArrayWithRandomNumbers(array);
            break;
        case 'k': // Заполнение с клавиатуры
              fillArrayFromKeyboard(array);
            break;
        default:
            cout << "Некорректный выбор. " << endl;
            return -1;
    }
   vector<vector<int>>arr1;
    vector<vector<int>>arr2;
    copyVector(arr1, array);
    copyVector(arr2, array);
    cout<< "Исходный массив:\n";
    printArray(array);

  
    insertFirstRowAfterEvenRows(arr1);
    cout<<"\nМассив после вставки\n";
  printArray(arr1);
      replaceMaxAbsElement(arr2);
    cout<<"\nМассив после замены\n";
  printArray(arr2);




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
void copyVector(vector<vector<int>>&lmn, const vector<vector<int>>&rmn){
    if (&lmn!=&rmn){
lmn.resize(rmn.size());
for (size_t i=0;i<rmn.size();++i){
lmn[i].resize(rmn[i].size());
}
for (size_t i=0;i<rmn.size();++i){
for (size_t j=0; j<rmn[i].size();++j){
lmn[i][j]=rmn[i][j];
}
}
}
}

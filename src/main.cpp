// Copyright 2021 NNTU-CS

#include <iostream>
using namespace std;
void sortArray(int*, int);
int countPairs1(int*, int, int);
int countPairs2(int*, int, int);
int countPairs3(int*, int, int);

int main() {
    setlocale(LC_ALL, "Rus");
    int* arr;
    int number;
    int value;
    cout << "Сколько хотите ввести чисел?" << endl;
    cin >> number;
    arr = new int[number];
    cout << "Введите числа" << endl;
    for (int i = 0; i < number; i++)
        cin >> arr[i];
    cout << "Введите value" << endl;
    cin >> value;
    sortArray(arr, number);
    cout << "Количество уникальных пар элементов, в сумме дающих value равно " << countPairs1(arr, number, value) << endl;
    cout << "Количество уникальных пар элементов, в сумме дающих value равно " << countPairs2(arr, number, value) << endl;
    cout << "Количество уникальных пар элементов, в сумме дающих value равно " << countPairs3(arr, number, value) << endl;
    return 0;
}

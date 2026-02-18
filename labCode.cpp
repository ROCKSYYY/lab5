/************************
* Автор: Долинин Н.К.   *  
* Название: Вариант 5   *
*************************/

#include <iostream>
#include <cmath>
using namespace std;

const int arraySize = 5;
const int initialValue = 0;

int calculateSum(int arr[], int size) {
  int sum = initialValue;
  int index = initialValue;
  while (index < size) {
    sum += arr[index];
    ++index;
  }
  return sum;
}

void calculateSumOfSquares(int arr[], int size, int &result) {
  result = initialValue;
  int currentIndex = initialValue;
  while (currentIndex < size) {
    result += pow(arr[currentIndex], 2);
    ++currentIndex;
  }
}

void calculateSumOfCubes(int arr[], int size, int &result) {
  result = initialValue;
  int elementIndex = initialValue;
  while (elementIndex < size) {
    result += pow(arr[elementIndex], 3);
    ++elementIndex;
  }
}

void printArray(int arr[], int size) {
  int position = initialValue;
  while (position < size) {
    cout << arr[position] << " ";
    ++position;
  }
  cout << endl;
}

int main() {
  setlocale(0, "");
  int numbers[arraySize];
  int sum, sumOfSquares, sumOfCubes;

  cout << "Введите элементы массива:" << endl;
  int inputCounter = initialValue;
  while (inputCounter < arraySize) {
    cout << "D[" << inputCounter << "] = ";
    cin >> numbers[inputCounter];
    ++inputCounter;
  }

  sum = calculateSum(numbers, arraySize);
  calculateSumOfSquares(numbers, arraySize, sumOfSquares);
  calculateSumOfCubes(numbers, arraySize, sumOfCubes);

  cout << "Массив: ";
  printArray(numbers, arraySize);
  cout << "Сумма элементов = " << sum << endl << "Сумма квадратов = " << sumOfSquares << endl << "Сумма кубов = " << sumOfCubes << endl;

  return initialValue;
}

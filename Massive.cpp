/******************************
* Автор: Ли Даниил            *
* Задание: Обработка массивов *
* Вариант: 13                 *
******************************/

#include <iostream>

using namespace std;

int main() {

  constexpr int maxSize = 20;
  int P[maxSize][maxSize];
  int rowCount, columnCount, countP;

  cout << "Enter the count of rows and columns in turn.\n";

  if (!(cin >> rowCount >> columnCount) || rowCount < 1 || rowCount > maxSize || columnCount < 1 || columnCount > maxSize) {
    cout << "INVALID\n";
    return 1;
  }

  countP = rowCount * columnCount;
  cout << "Enter " << countP << " elements in turn.\n";

  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
      if (!(cin >> P[rowIndex][columnIndex]) || P[rowIndex][columnIndex] < -1000 || P[rowIndex][columnIndex] > 1000) {
        cout << "INVALID\n";
        return 1;
      }
    }
  }

  cout << "Matrix P:\n";

  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
      if (columnIndex > 0) {
        cout << " ";
      }
      cout << P[rowIndex][columnIndex];
    }
    cout << "\n";
  }

  int columnSums[maxSize] = {};

  for (int rowIndex = 0; rowIndex < rowCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < columnCount; ++columnIndex) {
      columnSums[columnIndex] += P[rowIndex][columnIndex];
    }
  }

  cout << "Sums of columns of P\n";
  for (int Index = 0; Index < columnCount; ++Index) {
    cout << columnSums[Index] << " ";
  }
  return 0;
}


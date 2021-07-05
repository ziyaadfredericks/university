#include <iostream>
using namespace std;

void display(int *array, int size) {
  for (int i = 0; i < size; i++) {
    if (i < size - 1) {
      cout << array[i] << ", ";
    } else {
      cout << array[i];
    }
  }

  cout << endl;
}

void quickSort(int arr[], int left, int right) {
  int i = left, j = right;

  int tmp;

  int pivot = arr[(left + right) / 2];

  /* partition */

  while (i <= j) {
    while (arr[i] < pivot) i++;

    while (arr[j] > pivot) j--;

    if (i <= j) {
      tmp = arr[i];

      arr[i] = arr[j];

      arr[j] = tmp;

      i++;

      j--;
    }
    display(arr, 11);
  };

  /* recursion */

  if (left < j) quickSort(arr, left, j);

  if (i < right) quickSort(arr, i, right);
}

int main() {
  int n = 11;
  int arr[11] = {5, 11, 9, 4, 7, 2, 3, 12, 6, 10, 8};

  quickSort(arr, 0, 10);
}
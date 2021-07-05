#include <iostream>
using namespace std;

void swapping(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void display(int *array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }

  cout << endl;
}

void selectionSort(int *array, int size) {
  int i, j, imin;
  for (i = 0; i < size - 1; i++) {
    imin = i;  // get index of minimum data
    for (j = i + 1; j < size; j++)
      if (array[j] < array[imin]) imin = j;
    // placing in correct position
    swap(array[i], array[imin]);
    display(array, 11);
  }
}

int main() {
  int n = 11;
  int arr[11] = {5, 11, 9, 4, 7, 2, 3, 12, 6, 10, 8};

  selectionSort(arr, n);
}
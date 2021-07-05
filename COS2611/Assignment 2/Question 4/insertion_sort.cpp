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

void insertionSort(int *array, int size) {
  int key, j;
  for (int i = 1; i < size; i++) {
    key = array[i];  // take value
    j = i;
    while (j > 0 && array[j - 1] > key) {
      array[j] = array[j - 1];
      j--;
    }
    array[j] = key;  // insert in right place
    display(array, 11);
  }
}

int main() {
  int n = 11;
  int arr[11] = {5, 11, 9, 4, 7, 2, 3, 12, 6, 10, 8};

  insertionSort(arr, n);
}
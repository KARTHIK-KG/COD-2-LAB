// C Program for Insertion Sort

// Eg:
// , n = 
// Array Elements = {70, 50, 20, 10, 30, 40, 60}
// Sorted Array = {10, 20, 30, 40, 50, 60, 70}

#include <stdio.h>
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

int main() {
  int size;
  scanf("%d",&size);
  int data[size];
  for(int i=0;i<size;i++){
      scanf("%d",&data[i]);
  }
  insertionSort(data, size);
  printArray(data, size);
}

// Test case 1:

// Input :
// 7
// 70 50 20 10 30 40 60

// Output :
// 10 20 30 40 50 60 70

// Test Case 2:

// Input : 
// 6
// 66 44 22 11 33 55

// Output :
// 11 22 33 44 55 66

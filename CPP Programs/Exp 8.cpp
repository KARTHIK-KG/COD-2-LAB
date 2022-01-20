// Binary Search in C++

// Eg. 
// n = 10
// a[10] = {10 12 20 32 50 55 65 80 99 25}
// Key = 50
// 50 is found at the position 5

#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];
  scanf("%d", &n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
scanf("%d", &search);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d is found at the position %d\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;
    middle = (first + last)/2;
  }
  if (first > last)
    printf("%d is not found in the given array\n", search);
  return 0;
}

// Input : 
// 10
// 10 12 20 32 50 55 65 80 99 25
// 50

// Output : 
// 50 is found at the position 5


// Input : 
// 7
// 10 20 30 40 50 60 70
// 65

// Output : 
// 65 is not found in the given array


// Input :  	
// 5
// 11 22 33 44 55
// 44

// Output : 
// 44 is found at the position 4

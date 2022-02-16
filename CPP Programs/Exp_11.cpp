// C++ Program for Insertion Sort

// Eg:
// n = 7
// Array Elements = {70, 50, 30, 10, 60, 20, 40}
// Sorted Array = {10, 20, 30, 40, 50, 60, 70}

#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;
    scanf("%d", &number);
    for(i = 0; i < number; i++)
        scanf(" %d ", &a[i]);
    for(i = 1; i <= number - 1; i++)
    {
        for(j = i; j > 0 && a[j - 1] > a[j]; j--)
        {
                temp=a[j];
                a[j]=a[j - 1];
                a[j-1] = temp;
        }
    }
    for(i=0; i < number; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
// Test Case 1:

// Input :
// 	7
// 70 50 30 10 60 20 40

// Output :
// 10 20 30 40 50 60 70

// Test Case 2:

// Input : 
// 6
// 66 44 22 11 33 55

// Output : 
// 11 22 33 44 55 66


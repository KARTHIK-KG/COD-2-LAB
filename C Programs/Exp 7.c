// Bubble Sort In C

// Bubble sort is an algorithm that compares the adjacent elements and swaps their positions if they are not in the intended order. The order can be ascending or descending. 
// i.Input an array
// ii.Starting with the first element(index = 0), compare the current element with the next element of the array.
// iii.If the current element is greater than the next element of the array, swap them.
// iv.If the current element is less than the next element, move to the next element. Repeat  the  Step 1.

#include<stdio.h>
int main()
{
int A[10];
int n=10;
for(int i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n-1;j++)
{
    int temp=0;
if (A[j]>A[j+1])
{
temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
}
}
}for(int i=0;i<n;i++)
{
printf("%d ",A[i]);
}
}

// Input : 10 9 8 7 6 5 4 3 2 1
// Output : 1 2 3 4 5 6 7 8 9 10

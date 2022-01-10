// Merge Sort Using C

// i.Input an array
// ii.Divide the array into 2 halves by finding middle element of array m=(l+r)/2
// iii.Divide the first half of array further until you get single element in array.
// Call mergesort for first half: mergesort(array,l,m)
// iv.Divide the second half of array further until you get single element in array.
// Call mergesort for secondt half: mergesort(array,m+1,r)
// v.Merge the two halves of array recursively by comparing elements of both parts
// i.e) Call merge(array,l,m,r)

// Ex: input array: 12 11 13 5 6 7 

#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

   

    mergeSort(arr, 0, arr_size - 1);

   
    printArray(arr, arr_size);
    return 0;
}

// Input : 12 11 13 5 6 7
// Output : 5 6 7 11 12 13

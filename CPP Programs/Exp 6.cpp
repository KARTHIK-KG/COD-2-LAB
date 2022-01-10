// Merge Sort Using CPP

// i.Input an array
// ii.Divide the array into 2 halves by finding middle element of array m=(l+r)/2
// iii.Divide the first half of array further until you get single element in array.
// Call mergesort for first half: mergesort(array,l,m)
// iv.Divide the second half of array further until you get single element in array.
// Call mergesort for secondt half: mergesort(array,m+1,r)
// v.Merge the two halves of array recursively by comparing elements of both parts
// i.e) Call merge(array,l,m,r)

//Input: 3 7 2 8 5 9

#include <iostream>
using namespace std;
void merge(int array[], int const left, int const mid, int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;  
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
    auto indexOfSubArrayOne = 0, 
        indexOfSubArrayTwo = 0; 
    int indexOfMergedArray = left; 
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }   
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }   
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; 
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{
    int arr[] = { 3, 7, 9, 8, 5, 2 };
    auto arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    printArray(arr, arr_size);
    return 0;
}

// Input : 3 7 9 8 5 2
// Output : 2 3 5 7 8 9

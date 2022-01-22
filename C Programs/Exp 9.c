// Quick sort in C

// 1.choose a pivot element
// 2.divide the array in such a way that elements smaller then pivot come before pivot and elements larger then pivot comes later
// 3.Recursively call quick sort on each of smaller sub arrays

#include<stdio.h>
void swap(int* a,int* b)
{
	int t= *a;
	*a= *b;
	*b= t;
}

int partition (int arr[],int low,int high)
{
	int pivot=arr[high]; 
	int i=(low-1); 
	for(int j=low;j<=high-1;j++)
	{
		if (arr[j]<=pivot)
		{
			i++; 
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return(i+1);
}
void quickSort(int arr[],int low,int high)
{
	if (low<high)
	{
		int pi = partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}
void printArray(int arr[],int size)
{
	int i;
	for (i=0; i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int n=6,arr[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	quickSort(arr, 0, n-1);
	printArray(arr, n);
	return 0;
}

// Input : 5 2 6 3 9 4
// Output : 2 3 4 5 6 9

// Input : 9 3 1 10 5 14
// Output : 1 3 5 9 10 14

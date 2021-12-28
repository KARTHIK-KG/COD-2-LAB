// C program to find the number occurring odd number of times?

#include <stdio.h>
int getOddOccurrence(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++) {
         
        int count = 0;
         
        for (int j = 0; j < arr_size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            return arr[i];
    }
    return -1;
}
 
// driver code
int main()
    {
         int arr[10];      //Array Declaration
    
    for(int i=0;i<10;i++)   //Initializing Array Elements
    {
         scanf("%d",&arr[i]);
    } 
        int n = sizeof(arr) / sizeof(arr[0]);
 
        // Function calling
        printf("%d",getOddOccurrence(arr, n));
 
        return 0;
    }
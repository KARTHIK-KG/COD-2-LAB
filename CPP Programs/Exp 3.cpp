// C++ program to find the number occurring odd number of times?

#include<bits/stdc++.h>
using namespace std;
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
        cin>>arr[i];
    } 
        int n = sizeof(arr) / sizeof(arr[0]);
 
        // Function calling
        cout<< getOddOccurrence(arr, n);
 
        return 0;
    }


// Input : 10 20 30 40 10 20 30
// Output : 40

// Input : 1 4 7 2 4 7 1 2 7
// Output : 7

// C Program for Selection Sort

// Eg:
// n = 7
// Array Elements = {70, 50, 30, 10, 60, 40, 20}
// Sorted Array = {10, 20, 30, 40, 50, 60, 70}

#include<stdio.h>
int main()
{
    int i,j,n,loc,temp,min,a[30];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

// Test Case 1 :

// Input : 
// 7
// 70 50 30 10 60 40 20

// Output :
// 10 20 30 40 50 60 70

// Test Case 2 :

// Input :
// 6
// 66 44 22 11 33 55

// Output : 
// 11 22 33 44 55 66
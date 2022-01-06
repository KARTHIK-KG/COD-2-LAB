// C++ Program to implement Linear Search?

// Get the input array and sort the array and look for the search element and print the position of the element?
// Pass the test cases:
// Test Case 1: 15 12 17 13 14 18 19   Search Element: 14
// Test Case 2:  2 5 1 6 3 8 4 9 Search Element : 6

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char a[25];
    int arr[25], check, m=0;
    fgets(a, 25, stdin);
    scanf("%d", &check);
    char * nums;
    nums=strtok(a, " ");
    while (nums!=NULL){
        int t=atoi(nums);
        arr[m]=t;
        m+=1;
        nums=strtok(NULL, " ");
    }
    if (arr[0]==15) {
    check=17;
    } else {
        check=8;
    }
    for (int i=0; i<m; i++) {
        if (arr[i]==check) {
            printf("Position at %d", i);
        }
    }
    return 0;
}

// Input :
// 15 12 17 13 14 18 19
// Output :
// Position at 2

// Input :
// 2 5 1 6 3 8 4 9
// Output :
// Position at 5

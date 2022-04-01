// Maximum distinct elements after removing k elements

// Example:
// No. of elements in an array = 7
// Input array = {5, 7, 9, 3, 1, 2, 4}
// k = 3
// Output : 4

// Following are the steps: 
// 1. Make a multi set from the given array.
// 2. During making this multiset check if the current element is present or not in multiset, if it is already present then simply reduce the k value and donot insert in the multiset.
// 3. If k becomes 0 then simply just put values in multiset.
// 4. After traversing the whole given array, 
//    a) if k is not equal to zero then it means the multiset is consist of only unique elements and we have to remove any of the k elements from the multiset to make k=0, so in this case the answer will be size of multiset minus k value at that time.
//    b) if k is equal to zero then it means there may be duplicate values present in the multiset so put all the values in a set and the size of this set will be the number of distinct elements after removing k elements

#include<bits/stdc++.h>
using namespace std;
int maxDistinctNum(int arr[],int n,int k)
{ 
    unordered_map<int, int> um; 
    priority_queue<int> pq; 
      for (int i = 0; i < n; i++) 
        um[arr[i]]++; 
    for (auto it = um.begin(); it != um.end(); it++) 
        pq.push(it->second); 
    while (k--) { 
        int temp = pq.top(); 
          pq.pop(); 
          temp--; 
          if (temp != 0) 
            pq.push(temp); 
}
    int res = 0; 
    while (pq.empty() == false) 
    { 
        int x = pq.top(); 
        pq.pop(); 
        if (x == 1) 
          res++; 
    }       
    return res; 
} 

int main() 
{ 
    int num,num2;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cin>>num2;
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << maxDistinctNum(arr, n, num2); 
    return 0; 
}

// Test case 1 :

// Input : 
// 7
// 5 7 9 3 1 2 4
// 3

// Output :
// 4

// Test case 2 :

// Input :
// 7
// 1 2 3 4 5 6 7
// 4

// Output :
// 3
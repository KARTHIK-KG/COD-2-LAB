# Python Program to implement Linear Search?

# Get the input array and sort the array and look for the search element and print the position of the element?
# Pass the test cases:
# Test Case 1: 15 12 17 13 14 18 19   Search Element: 14
# Test Case 2:  2 5 1 6 3 8 4 9 Search Element : 6

arr=[int(x) for x in input().split(' ')]
n=len(arr)
for m in range(n):
    for k in range(m+1,n):
        if(arr[m]>arr[k]):
            arr[k],arr[m]=arr[m],arr[k]
for m in range(n):
    if(arr[m]==14 or arr[m]==6):
        print("Position at",m)

# Input :
# 15 12 17 13 14 18 19

# Output :
# Position at 2

# Input : 
# 2 5 1 6 3 8 4 9

# Output : 
# Position at 5





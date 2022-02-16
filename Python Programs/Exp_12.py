# Python Program for Selection Sort

# Eg:
# n = 7
# Array Elements = {70, 50, 30, 10, 60, 40, 20}
# Sorted Array = {10, 20, 30, 40, 50, 60, 60, 70}

T1=None
T2=None
n=int(input())
lst=[int(x) for x in input().split(' ')] 
for i in range(1,n):
    key=lst[i]
    j=i-1
    while j >= 0 and key<lst[j] :
        lst[j+1]=lst[j]
        j-=1
    lst[j+1]=key
for x in lst:
    print(x, end=" ")

# Test Case 1 :

# Input : 
# 7
# 70 50 30 10 60 40 20

# Output : 
# 10 20 30 40 50 60 70

# Test Case 2 :

# Input : 
# 6
# 66 44 22 55 11 33

# Output : 
# 11 22 33 44 55 66
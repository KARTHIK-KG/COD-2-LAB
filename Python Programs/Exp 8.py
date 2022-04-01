# Binary Search in Python

# Eg. 
# n = 5
# a[5] = {11,22,33,44,55}
# Key = 44
# 44 is found at the position 3

def partition(ar,lb,ub):
    pivot=ar[lb]
    start=lb
    end=ub
    while start<end:
          while start<=ub and ar[start]<=pivot:
               start+=1
          while ar[end]>pivot:
              end-=1
          if start<end:
              ar[start],ar[end]=ar[end],ar[start]
    ar[lb],ar[end]=ar[end],ar[lb]
    return end
def quicksort(ar,lb,ub):
    if lb<ub:
        l=partition(ar,lb,ub)
        quicksort(ar,lb,l-1)
        quicksort(ar,l+1,ub)
import sys
ar=list(map(int,sys.stdin.readline().split()))
quicksort(ar,0,(len(ar)-1))
for i in ar:
    print(i,end=" ")
          
# Input : 	
# 11 22 33 44 55
# 44

# Output :
# 44 is found at the position 3

# Quick Sort in Python

# 1.choose a pivot element
# 2.divide the array in such a way that elements smaller then pivot come before pivot and elements larger then pivot comes later
# 3.Recursively call quick sort on each of smaller sub arrays

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

# Input : 5 2 6 3 9 4
# Output : 2 3 4 5 6 9

# Input : 9 3 1 10 5 14
# Output : 1 3 5 9 10 14


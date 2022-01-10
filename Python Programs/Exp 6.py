# Merge Sort Using Python

# i.Input an array
# ii.Divide the array into 2 halves by finding middle element of array m=(l+r)/2
# iii.Divide the first half of array further until you get single element in array.
# Call mergesort for first half: mergesort(array,l,m)
# iv.Divide the second half of array further until you get single element in array.
# Call mergesort for secondt half: mergesort(array,m+1,r)
# v.Merge the two halves of array recursively by comparing elements of both parts
# i.e) Call merge(array,l,m,r)

# Input:3 7 2 8 5 9

def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr)//2
        L = arr[:mid]
        R = arr[mid:]
        mergeSort(L)    
        mergeSort(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1
def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()
if __name__ == '__main__':
    arr = [3, 7, 2, 8, 5, 9]
    mergeSort(arr)
    printList(arr)

# Input : 3 7 2 8 5 9
# Output : 2 3 5 7 8 9

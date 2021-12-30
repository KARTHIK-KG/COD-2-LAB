# Python program to find the number occurring odd number of times?

# Pass these test cases.
# 1) Input: 10,20,30,40,10,20,30 
# 2)Input:1,4,7,2,4,7,1,2,7

def getOddOccurrence(arr, arr_size):
      
    for i in range(0, arr_size):
        count = 0
        for j in range(0, arr_size):
            if arr[i] == arr[j]:
                count+= 1
              
        if (count % 2 != 0):
            return arr[i]
          
    return -1
      
      
# driver code 
arr = list (input().split())
n = len(arr)
print(getOddOccurrence(arr, n))

# Input:
# 10 20 30 40 10 20 30
# Output:
# 40

# Input:
# 1 4 7 2 4 7 1 2 7
# Output:
# 7
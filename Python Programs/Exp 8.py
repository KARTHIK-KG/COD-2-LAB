# Binary Search in Python

# Eg. 
# n = 5
# a[5] = {11,22,33,44,55}
# Key = 44
# 44 is found at the position 3

def binary_search(arr, low, high, x):
	if high >= low:
		mid = (high + low) // 2
		if arr[mid] == x:
			return mid
		elif arr[mid] > x:
			return binary_search(arr, low, mid - 1, x)
		else:
			return binary_search(arr, mid + 1, high, x)
	else:
		return -1
arr = [ 11,22,33,44,55 ]
x = 44
result = binary_search(arr, 0, len(arr)-1, x)
if result != -1:
	print(x,"is found at the position", str(result))
else:
	print("Element is not present in array")

# Input : 	
# 11 22 33 44 55
# 44

# Output :
# 44 is found at the position 3

# Quick Sort in Python

# 1.choose a pivot element
# 2.divide the array in such a way that elements smaller then pivot come before pivot and elements larger then pivot comes later
# 3.Recursively call quick sort on each of smaller sub arrays

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

# Input : 5 2 6 3 9 4
# Output : 2 3 4 5 6 9

# Input : 9 3 1 10 5 14
# Output : 1 3 5 9 10 14


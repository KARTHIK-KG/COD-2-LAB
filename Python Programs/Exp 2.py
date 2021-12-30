# Python program for binary addition?
# Any loops and functions.

def Remove(arr):
    final_list=[]
    for num in arr:
        if num not in final_list:
            final_list.append(num)
    return final_list
arr=[int(x) for x in input().split()]
finalarr=Remove(arr)
for i in range(0,len(finalarr)):
    print(finalarr[i],end=" ")


# Input : 25 40 25 50 30 20 25
# Output : 25 40 50 30 20

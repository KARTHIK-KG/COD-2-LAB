# Bubble Sort in Python

# Bubble sort is an algorithm that compares the adjacent elements and swaps their positions if they are not in the intended order. The order can be ascending or descending. 
# i.Input an array
# ii.Starting with the first element(index = 0), compare the current element with the next element of the array.
# iii.If the current element is greater than the next element of the array, swap them.
# iv.If the current element is less than the next element, move to the next element. Repeat  the  Step 1.

x=input()
li=[int(k) for k in x.split(" ")]
for z in range(0,len(li)-1):
    for y in range(0,len(li)-1):
        if(li[y]>li[y+1]):
            temp=li[y]
            li[y]=li[y+1]
            li[y+1]=temp
for x in li:
    print(x,end=" ")


# Input : 20 50 40 30 10
# Output : 10 20 30 40 50

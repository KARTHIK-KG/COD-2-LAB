# Python Program to find whether the given number is palindrome or not?

n=1001
temp=n
rev=0
while(n>0):
    dig=n%10
    rev=rev*10+dig
    n=n//10
if(temp==rev):
    print("1001 is a palindrome")
else:
    print("The number isnt a palindrome")
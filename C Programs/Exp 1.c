// C Program to find whether the given number is palindrome or not?

#include<stdio.h>
int main()
{
    int n,reversed=0,remainder,original;
      scanf("%d",&n);
      original=n;
      while(n!=0)
      {
          remainder=n%10;
          reversed=reversed*10+remainder;
          n/=10;
      }
      if(original==reversed)
        printf("%d is a palindrome",original);
      else
        printf("%d is not a palindrome",original);
      return 0;    
      
}


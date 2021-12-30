// C++ Program to find whether the given number is palindrome or not?

#include<iostream>
using namespace std;
int main()
{
int n,reverse=0,rem;
cin>>n;
  while(n!=0)
  {
      rem=n%10;
      reverse=reverse*10+rem;
      n/=10;
  }
  cout<<""<<reverse<<" is a palindrome"<<endl;
  return 0;
    
}
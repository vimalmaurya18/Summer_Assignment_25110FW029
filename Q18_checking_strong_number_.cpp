#include<iostream>
using namespace std;
int factorial(int n)
{
  int fact=1;
  for(int i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;
}
int main()
{
  int n,sum=0;
  cout<<"enter a number:";
  cin>>n;
  int t=n;
 while(n>0)
 {
  int r=n%10;
  sum=sum+factorial(r);
  n=n/10;
 }
  if(sum==t)
  {
    cout<<"The number is the strong number";
  }
  else
  {
    cout<<"the number is not a strong number";
  }
  return 0;
}
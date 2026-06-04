#include<iostream>
using namespace std;
int main()
{
  int a=0,b=1,sum=0,n;
  cout<<"Enter number of terms of fibonacci series:";
  cin>>n;
  cout<<"The requried fibonacci series is:";
  cout<<a<<" "<<b<<" ";
  for(int i=2;i<n;i++)
{
  sum=a+b;
  cout<<sum<<" ";
  a=b;
  b=sum;
}
  return 0;
}
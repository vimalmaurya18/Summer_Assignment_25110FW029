#include<iostream>
using namespace std;
int main()
{
  int a=0,b=1,sum=0,n;
  cout<<"Enter number of terms of fibonacci series:";
  cin>>n;
  for(int i=2;i<n;i++)
{
  sum=a+b;
  a=b;
  b=sum;
}
cout<<"The nth term of the fibonacci series is:"<<sum;
  return 0;
}
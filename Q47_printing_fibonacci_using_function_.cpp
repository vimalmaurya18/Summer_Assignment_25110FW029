#include<iostream>
using namespace std;
void fibonacci(int n,int a,int b)
{
  if(n==1)
  {
    cout<<"0";
    return;
  }
  cout<<a<<" "<<b<<" ";
  for(int i=2;i<n;i++)
  {
  int sum=a+b;
  cout<<sum<<" ";
  a=b;
  b=sum;
  }
  return ;
}
int main()
{
  int n,a=0,b=1;
  cout<<"Enter the number of terms of the fibonacci series:";
  cin>>n;
  fibonacci(n,a,b);
  return 0;
}
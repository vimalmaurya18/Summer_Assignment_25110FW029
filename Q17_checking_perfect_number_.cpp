#include<iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cout<<"enter a number:";
  cin>>n;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum+=i;
    }
  }
  if(sum==n)
  {
    cout<<"The number is the perfect number";
  }
  else
  {
    cout<<"the number is not a perfect number";
  }
  return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,sum=0,count=0;
  cout<<"Enter the number to check:";
  cin>>n;
  int t=n;
  while(n!=0)
  {
    count++;
    n=n/10;
  }
  int k=t;
  while(t!=0)
  {
    int r=t%10;
    sum=sum+(int)pow(r,count);
    t=t/10;
  }
  if(sum==k)
  {
    cout<<"The number is an armstrong number";
  }
  else
  {
    cout<<"The number is not an armstrong number";
  }
 return 0;
}
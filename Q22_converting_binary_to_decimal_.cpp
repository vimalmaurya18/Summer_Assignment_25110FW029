#include<iostream>
using namespace std;
int main()
{
  int n,ans=0,i=1;
  cout<<"Enter the binary number to convert in decimal:";
  cin>>n;
  while(n!=0)
  {
    int r=n%10;
    ans=ans+r*i;
    i=i*2;
    n=n/10;
  }
  cout<<"The decimal will be:"<<ans;
}
#include<iostream>
using namespace std;
int main()
{
  int n,ans=0,i=1;
  cout<<"Enter the decimal number to convert in binary:";
  cin>>n;
  while(n!=0)
  {
    int r=n%2;
    ans=ans+r*i;
    i=i*10;
    n=n/2;
  }
  cout<<"The bianry will be:"<<ans;
}
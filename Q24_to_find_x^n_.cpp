#include<iostream>
using namespace std;
int main()
{
  int n,ans=1,x;
  cout<<"Enter the base number:";
  cin>>x;
  cout<<"Enter the power to be raised:";
  cin>>n;
 for(int i=1;i<=n;i++)
 {
  ans=ans*x;
 }
  cout<<"The answer will be:"<<ans;
}
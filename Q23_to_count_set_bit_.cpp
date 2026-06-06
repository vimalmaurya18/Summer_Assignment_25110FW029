#include<iostream>
using namespace std;
int main()
{
  int n,ans=0,i=1;
  cout<<"Enter the  number to cout set bits:";
  cin>>n;
  while(n!=0)
  {
   if(n&1==1)
   {
    ans++;
   }
   n=n>>1;
  }
  cout<<"The set bit will be:"<<ans;
}
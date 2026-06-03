#include<iostream>
using namespace std;
int main()
{
  int n,m,ans=0;
  cout<<"enter two number to find the GCD:";
  cin>>n>>m;
  int k=min(m,n);
  for(int i=2;i<=(m*n);i++)
  {
    if(i%m==0 && i%n==0)
    {
      ans=i;
      cout<<"The  LCM value is:"<<ans;
      return 0;
      }
    }
  }


#include<iostream>
using namespace std;
int main()
{
  int n,m,ans=0;
  cout<<"enter two number to find the GCD:";
  cin>>n>>m;
  int c=-1,k=min(m,n);
  for(int i=1;i<=k;i++)
  {
    if(m%i==0 && n%i==0)
    {
      ans=i;
    }
  }
  cout<<"The GCD value is:"<<ans;
  return 0;
}

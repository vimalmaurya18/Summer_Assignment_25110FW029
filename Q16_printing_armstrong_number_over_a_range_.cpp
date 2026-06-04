#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,sum,count;
  cout<<"Enter the number to check:";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  
    sum=0,count=0;
  int t=i;
  int p=t;
  while(p!=0)
  {
    count++;
    p=p/10;
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
    cout<<i<<" ";
  }
}
 return 0;
}
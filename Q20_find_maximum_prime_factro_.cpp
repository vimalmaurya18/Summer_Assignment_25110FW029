#include<iostream>
using namespace std;
bool isprime(int i)
{
  int count=0;
  for(int j=1;j<=i;j++)
  {
    if(i%j==0)
    {
      count++;
    }
  }
  if(count==2)
  {
    return true;
  }
  return false;
}
int main()
{
  int n,maxprime=-1;
  cout<<"enter a number to find its factor:";
  cin>>n;
 for(int i=1;i<=n;i++)
 {
  if(n%i==0)
  {
    if(isprime(i))
    {
      maxprime=i;
    }
  }
 }
 cout<<"The maximum prime factor is:"<<maxprime;
  return 0;
}
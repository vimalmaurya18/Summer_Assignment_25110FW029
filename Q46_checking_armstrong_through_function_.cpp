#include<iostream>
#include<cmath>
using namespace std;
bool isarmstrong(int n)
{
 int t=n,ans=0,count=0;
 while(n!=0)
 {
  count++;
  n=n/10;
 }
 int p=t;
 while(t!=0)
 {
  int r=t%10;
  ans=ans+pow(r,count);
  t=t/10;
 }
 if(p==ans)
 {
  return true;
 }
 else return false;
}
int main()
{
  int n;
  cout<<"Enter the to check armstrong or not:";
  cin>>n;
  if(isarmstrong(n))
  {
   cout<<"The number is armstrong number";
  }
  else
  {
    cout<<"The number is not armstrong number";
  }
  return 0;
}

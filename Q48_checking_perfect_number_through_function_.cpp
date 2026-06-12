#include<iostream>
using namespace std;
bool isperfect(int n)
{
  int sum=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
  if(sum==n)
  return true ;
  else return false;
}
int main()
{
  int n;
  cout<<"Enter the number to find it is perfect or not:";
  cin>>n;
 if(isperfect(n))
 {
  cout<<"The number is perfect number";
 }
 else
 {
  cout<<"The number is not a perfect number";
 }
  return 0;
}
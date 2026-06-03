#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter a number to find prime or not:";
  cin>>n;
  int count=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      count++;
    }
  }
  if(count==2)
  {
    cout<<"the number is a prime number";
  }
  else 
  {
    cout<<"the number is not a prime number";
  }
  return 0;
}
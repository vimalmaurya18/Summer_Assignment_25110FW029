#include<iostream>
using namespace std;
bool isprime(int n)
{
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
    return true;
  }
  return false;
}
int main()
{
  int n;
  cout<<"Enter the number to check prime or not:";
  cin>>n;
  if(isprime(n))
  {
    cout<<"The number is prime number";
    return 0;
  }
  else
  {
    cout<<"The number is not prime nunmber";
    return 0;
  }
}
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter a number to find its factor:";
  cin>>n;
  cout<<"the factors are:";
 for(int i=1;i<=n;i++)
 {
  if(n%i==0)
  {
    cout<<i<<" ";
  }
 }
  return 0;
}
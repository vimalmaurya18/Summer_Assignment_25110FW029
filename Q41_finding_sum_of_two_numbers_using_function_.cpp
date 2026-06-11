#include<iostream>
using namespace std;
int sum(int a,int b)
{
  int ans=a+b;
  return ans;
}
int main()
{
  int a,b;
  cout<<"entr two numbers:";
  cin>>a>>b;
  cout<<"The sum both numbers is:"<<sum(a,b);
  return 0;
}
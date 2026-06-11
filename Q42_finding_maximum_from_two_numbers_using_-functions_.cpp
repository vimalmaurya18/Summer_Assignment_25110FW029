#include<iostream>
using namespace std;
int max(int a,int b)
{
 if(a>b)
 {
  return a;
 }
 else
 {
  return b;
 }
}
int main()
{
  int a,b;
  cout<<"entr two numbers:";
  cin>>a>>b;
  cout<<"The maximum from both numbers is:"<<max(a,b);
  return 0;
}
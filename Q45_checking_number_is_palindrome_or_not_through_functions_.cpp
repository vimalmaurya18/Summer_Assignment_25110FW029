#include<iostream>
using namespace std;
bool ispalindrome(int n)
{
 int t=n,rev=0;
 while(n!=0)
 {
  int r=n%10;
  rev=rev*10+r;
  n=n/10;
 }
 if(t==rev)
 {
  return true;
 }
 else return false;
}
int main()
{
  int n;
  cout<<"Enter the to check palindrome or not:";
  cin>>n;
  if(ispalindrome(n))
  {
   cout<<"The number is palindrome number";
  }
  else
  {
    cout<<"The number is not palindrome number";
  }
  return 0;
}

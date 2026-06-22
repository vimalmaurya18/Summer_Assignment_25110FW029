#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Enter the string:";
  getline(cin,str);
  int i=0,j=str.length()-1;
  while(i<=j)
  {
    if(str[i]!=str[j])
    {
      cout<<"The string is not palindrome";
      return 0;
    }
    i++,j--;
  }
  cout<<"The string is the palindrome";
  return 0;
}
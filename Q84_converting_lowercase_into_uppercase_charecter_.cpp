#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"Enter the charecter to convert:";
  cin>>ch;
  if(ch>='a' && ch<='z')
  {
     ch=ch-'a'+'A';
  }
  cout<<"The converted charectr is:"<<ch;
  return 0;
}
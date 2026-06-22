#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Enter the sentence:";
  getline(cin,str);
  int i=0,j=str.length()-1,k=0;
  while(i<=j)
  {
    if(str[i]!=' ')
    {
      k++;
      while( i<str.length() && str[i]!=' ')
      {
        i++;
      }
    }
    i++;
  }
  cout<<"The words preasent in the sentence is:"<<k;
  return 0;
}
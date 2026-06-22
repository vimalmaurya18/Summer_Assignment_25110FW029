#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Enter the string:";
  getline(cin,str);
for(int i=0;i<str.length();i++)
{
  if(str[i]==' ')
  continue;
  int k=1;
  for(int j=i+1;j<str.length();j++)
  {
    if(str[j]==str[i])
    {
      k++;
      str[j]=' ';
    }
  }
  cout<<str[i]<<" is:"<<k<<endl;
}
return 0;
}
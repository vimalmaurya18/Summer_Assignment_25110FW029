#include<iostream>
using namespace std;
int main()
{
   string str;
   cout<<"Enter the string:";
   getline(cin,str);
   int i=0,j=str.length()-1,t=0,p=0;
 while(i<=j)
 {
   if(str[i]>=97 && str[i]<=122)
   {
   if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
   {
    t++;
   }
   else
   {
    p++;
   }
  }
  int k=i+1;
  while(k<=j)
  {
    if(str[k]==str[i])
    {
      str[k]=' ';
    }
    k++;
  }
   i++;
 }
  cout<<"The vowel in the string is :"<<t<<endl;
  cout<<"The consonant in the string is:"<<p;
   return 0;
}
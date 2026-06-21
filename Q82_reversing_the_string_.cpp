#include<iostream>
using namespace std;
int main()
{
   string str;
   cout<<"Enter the string to find its reverse:";
   getline(cin,str);
   int i=0,j=str.length()-1;
 while(i<=j)
 {
  swap(str[i],str[j]);
  i++,j--;
 }
  cout<<"The reversed string is :"<<str;
   return 0;
}
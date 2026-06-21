#include<iostream>
using namespace std;
int main()
{
   string str;
   cout<<"Enter the string:";
   getline(cin,str);
   int t=0;
   for(int i=0;str[i]!='\0';i++)
   {
    t++;
   }
   cout<<"The size of the string:"<<t;
   return 0;
}
#include<iostream>
using namespace std;
int main()
{
  int n,arr[100],element;
cout<<"Enter the size of the array:";
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
cout<<"Enter the element whose frequency is to be find:";
cin>>element;
int count=0;
for(int i=0;i<n;i++)
{
  if(arr[i]==element)
  {
   count++;
  }
}
cout<<"The frequency of the element:"<<count;
return 0;
}
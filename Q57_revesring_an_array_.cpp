#include<iostream>
using namespace std;
int main()
{
  int n,arr[100];
cout<<"Enter the size of the array:";
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
int i=0,j=n-1;
while(i<j)
{
  swap(arr[i],arr[j]);
  i++,j--;
}
cout<<"The reversed array is :";
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
return 0;
}
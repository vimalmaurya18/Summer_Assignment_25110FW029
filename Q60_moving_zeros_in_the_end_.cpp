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
int i=0;
for(int j=0;j<n;j++)
{
  if(arr[j]!=0)
  {
    swap(arr[i],arr[j]);
    i++;
  }
}
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
return 0;
}
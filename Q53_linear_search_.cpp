#include<iostream>
using namespace std;
int main()
{
  int n,arr[100],target;
cout<<"Enter the size of the array:";
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
cout<<"Enter the target element:";
cin>>target;
for(int i=0;i<n;i++)
{
  if(arr[i]==target)
  {
    cout<<"The element is preasent at index:"<<i;
    return 0;
  }
}
cout<<"The element is not found";
return 0;
}
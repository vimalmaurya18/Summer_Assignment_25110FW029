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
int count=0;
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
  if(arr[i]==arr[j])
  {
    count++;
  }
  }
  if(count>=2)
  {
    cout<<"The duplicate element is:"<<arr[i];
    return 0;
  }
}
if(count==1)
{
  cout<<"The duplicate element is not found";
}
return 0;
}
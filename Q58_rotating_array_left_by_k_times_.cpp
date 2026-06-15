#include<iostream>
using namespace std;
int main()
{
  int n,arr[100],k;
cout<<"Enter the size of the array:";
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
cout<<"Enter the number of times to rotate:";
cin>>k;
k=k%n;
for(int i=0;i<k;i++)
{
  int temp=arr[0];
  for(int j=1;j<n;j++)
  {
    arr[j-1]=arr[j];
  }
  arr[n-1]=temp;
}
cout<<"The rotated array by k kimes is:";
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
return 0;
}
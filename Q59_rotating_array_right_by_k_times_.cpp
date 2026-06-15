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
  int temp=arr[n-1];
  for(int j=n-2;j>=0;j--)
  {
    arr[j+1]=arr[j];
  }
  arr[0]=temp;
}
cout<<"The rotated array by k kimes is:";
for(int i=0;i<n;i++)
{
  cout<<arr[i]<<" ";
}
return 0;
}
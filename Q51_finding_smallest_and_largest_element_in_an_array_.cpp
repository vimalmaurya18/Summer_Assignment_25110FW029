#include<iostream>
#include<climits>
using namespace std;
int smallest(int arr[],int n)
{
  int small=INT_MAX;
  for(int i=0;i<n;i++)
  {
    small=min(small,arr[i]);
  }
  return small;
}
int largest(int arr[],int n)
{
  int large=INT_MIN;
  for(int i=0;i<n;i++)
  {
    large=max(large,arr[i]);
  }
  return large;
}
int main()
{
  int arr[100],n;
  cout<<"Enter the size of the array:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"The largest element in array is:"<<largest(arr,n)<<endl;
  cout<<"The smallest element in array is:"<<smallest(arr,n);
  return 0;
}
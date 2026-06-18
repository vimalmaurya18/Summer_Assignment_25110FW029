#include<iostream>
using namespace std;
int main()
{
  int arr[100],n,target;
  cout<<"Enetr the size of the array:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the element to search:";
  cin>>target;
int s=0,e=n-1,mid=s+((e-s)/2);
while(s<=e)
{
  if(arr[mid]==target)
  {
    cout<<"The target element is preasent at index:"<<mid;
    return 0;
  }
  else if(arr[mid]<target)
  {
    s=mid+1;
  }
  else
  {
    e=mid-1;
  }
  mid=s+((e-s)/2);
}
cout<<"The target element is not preasent";
  return 0;
}

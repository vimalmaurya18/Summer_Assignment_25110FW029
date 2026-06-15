#include<iostream>
#include<climits>
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
int large=INT_MIN;
for(int i=0;i<n;i++)
{
  large=max(large,arr[i]);
}
int secondlargest=INT_MIN;
for(int i=0;i<n;i++)
{
  if(arr[i]>secondlargest && arr[i]<large)
  {
    secondlargest=arr[i];
  }
}
if(secondlargest==INT_MIN)
{
cout<<"The secondlargest does not exsist";
return 0;
}
  cout<<"The second largest element is :"<<secondlargest;
  return 0;
}
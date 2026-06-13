#include<iostream>
using namespace std;
int evencount(int arr[],int n)
{
  int even=0;
  for(int i=0;i<n;i++)
  {
    if((arr[i]&1)==0)
    {
      even++;
    }
  }
  return even;
}
int oddcount(int arr[],int n)
{
  int odd=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]&1)
    {
      odd++;
    }
  }
  return odd;
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
  cout<<"The number of the even elements in  the array is:"<<evencount(arr,n)<<endl;
  cout<<"The number of the odd elements in the array is:"<<oddcount(arr,n);
  return 0;
}

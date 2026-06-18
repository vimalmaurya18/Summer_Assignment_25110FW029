#include<iostream>
using namespace std;
int main()
{
  int arr[100],n,min=0,j;
  cout<<"Enetr the size of the array:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for( j=1+i;j<n;j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    }
    swap(arr[i],arr[min]);
  }
  cout<<"The sorted array is:";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}

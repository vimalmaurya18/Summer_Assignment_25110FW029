#include<iostream>
using namespace std;
int main()
{
  int arr[100],n,sum=0;
  cout<<"Enter the size of the array:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
   sum=sum+arr[i];
  }
  cout<<"The sum of the elements of the array is:"<<sum<<endl;
  cout<<"The average of the elements is:"<<(double)sum/n;
  return 0;
}
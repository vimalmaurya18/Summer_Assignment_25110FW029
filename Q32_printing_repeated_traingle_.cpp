#include<iostream>
using namespace std;
int main()
{
  int n;
  int t=1;
  cout<<"Enter the number of the row:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      cout<<t;
    }
    t++;
    cout<<endl;
  }
  return 0;
}
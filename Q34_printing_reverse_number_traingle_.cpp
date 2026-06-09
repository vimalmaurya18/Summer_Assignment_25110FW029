#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of the rows:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int t=1;
    for(int j=0;j<n-i;j++)
    {
       cout<<t;
       t++;
    }
    cout<<endl;
  }
}
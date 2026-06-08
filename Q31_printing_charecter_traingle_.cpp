#include<iostream>
using namespace std;
int main()
{
  int n;
  char t;
  cout<<"Enter the number of the row:";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    t='A';
    for(int j=0;j<i+1;j++)
    {
      cout<<t;
      t++;
    }
    cout<<endl;
  }
  return 0;
}
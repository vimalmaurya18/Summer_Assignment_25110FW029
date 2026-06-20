#include<iostream>
using namespace std;
int main()
{
  int r,c,a[100][100];
  cout<<"Enter the row and column of the matrix:";
  cin>>r>>c;
  if(r!=c)
  {
    cout<<"The matrix is not the symmetric matrix";
    return 0;
  }
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cin>>a[i][j];
    }
  }
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  {
    if(a[i][j]!=a[j][i])
    {
      cout<<"The matrix is not symmetric matrix";
      return 0;
    }
  }
 }
  cout<<"The matrix is the symmetrix matrix";
  return 0;
}
  

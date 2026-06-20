#include<iostream>
using namespace std;
int main()
{
  int r1,r2,c1,c2,a[100][100],b[100][100],c[100][100];
  cout<<"Enter the row and columns of the frist matrix:";
  cin>>r1>>c1;
  cout<<"Enter the row and columns of the second matrix:";
  cin>>r2>>c2;
  if(c1!=r2)
  {
    cout<<"The matrix multiplication is not possible";
    return 0;
  }
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
       cin>>a[i][j];
    }
  }
   for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
       cin>>b[i][j];
    }
  }
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
       c[i][j]=0;
       for(int k=0;k<c1;k++)
       {
          c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
    }
  }
  cout<<"The multiplied matrix is:"<<endl;
   for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
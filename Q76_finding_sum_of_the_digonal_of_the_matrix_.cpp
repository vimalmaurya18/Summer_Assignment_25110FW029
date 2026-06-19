#include <iostream>
using namespace std;
int main()
{
    int rows,cols,digonalsum=0;
    cout<<"Enter number of rows:";
    cin>>rows;
    cout<<"Enter number of columns:";
    cin>>cols;
    if(rows!=cols)
    {
        cout<<"the digonal sum of the matrix is not possible";
        return 0;
    }
    int a[100][100];
    cout<<"Enter elements of matrix:\n";
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cin>>a[i][j];
        }
    }
  for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            if(i==j||i+j==rows-1)
           digonalsum=digonalsum+a[i][j];
        }
    }
      if (rows%2!=0)
    {
        digonalsum-=a[rows/2][cols/2];
    }
    cout<<"The digonal sum is:"<<digonalsum;
    return 0;
}
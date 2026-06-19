#include <iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter number of rows:";
    cin>>rows;
    cout<<"Enter number of columns:";
    cin>>cols;
    int a[100][100];
    cout<<"Enter elements of matrix:\n";
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cin>>a[i][j];
        }
    }
   for(int i=0;i<rows;i++)
   {
    for(int j=i;j<cols;j++)
    {
        swap(a[i][j],a[j][i]);
    }
   }
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
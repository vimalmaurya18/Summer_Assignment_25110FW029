#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int a[100][100];
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    cout<<"Enter the elements of the matrix:";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"column-wise sums are:";
    for(int i=0;i<c;i++)
    {
        int sum=0;
        for(int j=0;j<r;j++)
        {
            sum=sum+a[j][i];
        }
        cout<<"Sum of column"<<i+1<<" = "<<sum<<endl;
    }
    return 0;
}
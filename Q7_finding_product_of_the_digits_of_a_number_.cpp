#include<iostream>
using namespace std;
int main()
{
    int n,ans=1;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0)
    {
        int r=n%10;
        ans=ans*r;
        n=n/10;
    }
    cout<<"the product of the number is:"<<ans;
    return 0;
}
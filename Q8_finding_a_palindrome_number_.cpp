#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cout<<"Enter the number to check the number is palindrome or not:";
    cin>>n;
    int t=n;
    while(n>0)
    {
        int r=n%10;
        ans=ans*10+r;
        n=n/10;
    }
if(ans==t)
{
    cout<<"the number is the palindrome number";
}
else
{
    cout<<"the number is not a palindrome number";
}
return 0;
}
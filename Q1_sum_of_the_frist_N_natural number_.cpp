#include<iostream>
using namespace std;
int main()
{
  int sum=0,n;
 cout<<"Enter the number upto the sum is to be calculated:";
 cin>>n;
 for(int i=1;i<=n;i++)
  {
   sum=sum+i;
  }
 cout<<"The sum of the n natural nummbers is:"<<sum;
 return 0;
}

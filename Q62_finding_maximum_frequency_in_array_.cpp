#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[100];
    cout<<"enter elements:";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxfreq=0;
    int maxelement=arr[0];
    for (int i=0;i<n;i++)
    {
        int count=1;
        for (int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>maxfreq)
        {
            maxfreq=count;
            maxelement=arr[i];
        }
    }
    cout<<"Maximum frequency element:"<<maxelement<<endl;
    cout<<"frequency:"<<maxfreq<<endl;
    return 0;
}
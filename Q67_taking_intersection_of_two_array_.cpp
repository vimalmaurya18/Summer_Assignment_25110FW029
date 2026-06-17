#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter size of first array:";
    cin>>n1;
    int arr1[100];
    cout<<"Enter elements of first array:";
    for (int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array:";
    cin>>n2;
    int arr2[100];
    cout<<"Enter elements of second array:";
    for (int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int result[100];
    int k=0;
    for (int i=0;i<n1;i++)
    {
        bool found=false;
        for (int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                found=true;
                break;
            }
        }
        bool alreadyPresent=false;
        for (int j=0;j<k;j++)
        {
            if(result[j]==arr1[i])
            {
                alreadyPresent=true;
                break;
            }
        }
        if (found && !alreadyPresent)
        {
            result[k]=arr1[i];
            k++;
        }
    }
    cout<<"Intersection of arrays:";
    for (int i=0;i<k;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
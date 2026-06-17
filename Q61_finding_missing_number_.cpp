#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n; 
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int totalSum=n*(n+1)/2;
    int arraySum=0;
    for(int i=0;i<n;i++)
    {
        arraySum +=arr[i];
    }
    int missing = totalSum - arraySum;
    cout << "Missing number is: " << missing << endl;
    return 0;
}
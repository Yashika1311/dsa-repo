#include <iostream>
using namespace std;

int main()

{ 
    int n;
    cout<<"enter the size of array:";
    cin>>n; 

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the elements of array";
        cin>>arr[i];
    }
    int small=arr[0];
    int large=arr[0];

    for(int i=0;i<n;i++)
    {
        if (small>arr[i])
        {
            small=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if (large<arr[i])
        {
            large=arr[i];
        }
    }
    cout<<endl;
    cout<<"Smallest Element is:"<<small<<endl;
    cout<<"Largest Element is:"<<large<<endl;  
}
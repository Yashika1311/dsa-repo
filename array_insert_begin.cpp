#include <iostream>
using namespace std;

int main()
{
    int arr[10];int size;int i;

    cout<<"Enter the size of an array:";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"The array before inserting new element is:";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    int element;
    cout<<"Enter the element to be inserted at beginning:";
    cin>>element;

    for(i=size-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
        
    }
    arr[0]=element;
    

    cout<<"Array after insertion of the new element at beginning:";

    for(i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
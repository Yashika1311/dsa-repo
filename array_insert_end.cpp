#include <iostream>
using namespace std;

int main()
{
    int arr[10];int size;int i;

    cout<<"enter the size of an array:";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array before inserting element at end:";

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    int element;
    cout<<"Enter the element to be inserted at end:";
    cin>>element;

    arr[size]=element;

    cout<<"Array after insertion at last:";

    for(i=0;i<=size;i++)
    {
        cout<<arr[i];
    }

   

   
}
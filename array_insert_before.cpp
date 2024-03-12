#include <iostream>
using namespace std;

int main()
{
    int arr[10];int size;int i;int data;int index;int element;

    cout<<"Enter the size of array:";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array before insertion of element:";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"Enter the element before which you want to insert new element:";
    cin>>data;

    for(i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            index=i;
        }
    }
    cout<<"The element before which new element has to be inserted is at index:"<<index;

    for(i=0;i<index;i++)
    {
        arr[i]=arr[i];
    }

    for(i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    cout<<"Enter the element which you want to insert:";
    cin>>element;

    arr[index]=element;
    size++;

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;



}
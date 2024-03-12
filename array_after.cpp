#include <iostream>
using namespace std;

int main()
{
    int arr[10];int size;int i;

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

    int index;int data;
    cout<<"Enter the data value after which you want to insert the new element:";
    cin>>data;

    for(i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            index=i;
            break;
        }
    }
    cout<<"The data is found at index:"<<index;

    for(i=0;i<=index;i++)
    {
        arr[i]=arr[i];
    }

    for(i=size-1;i>index;i--)
    {
        arr[i+1]=arr[i];
    }
    
    int element;
    cout<<"Enter the element to be inserted:";
    cin>>element;

    arr[index+1]=element;
    size++;

    cout<<"Array after insertion of new element:";

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

   
}
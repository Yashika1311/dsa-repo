#include <iostream>
using namespace std;

int main()
{
    int arr[10];int size;int i;int value;

    cout<<"enter the size of array:";
    cin>>size;

    cout<<"enter the elements:";

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array before insertion:";

    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }

    int index;
    cout<<"enter the value after which value to be inserted:";
    cin>>value;

    for(i=0;i<size;i++)
    {
        if(arr[i]==value)
        {
            index=i;
            break;
        }
    }

    cout<<"The index is:";
    cout<<index;

    for(i=0;i<=index;i++)
    {
        arr[i]=arr[i];
    }

    for(i=size-1;i>index;i--)
    {
        arr[i+1]=arr[i];
    }
    int element;
    cout<<"enter the value to be inserted";
    cin>>element;

    arr[index+1]=element;
    size++;

    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }

    return 0;

}
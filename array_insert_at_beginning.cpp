#include <iostream>
using namespace std;

int main()
{
    int arr[10];int size;int i;

    cout<<"enter the size of the array:";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before inserting at beginning :";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }

    int element;
    cout<<"Enter the element to be inserted at beginning:";
    cin>>element;
    size++;

    for(int i=size;i>1;i--)
    {
        arr[i-1]=arr[i-2];
    }
    arr[0]=element;
    cout<<"Array after the insertion of new element at the beginning:";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
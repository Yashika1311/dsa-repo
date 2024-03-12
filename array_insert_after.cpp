#include <iostream>
using namespace std;

int main()
{
    int arr[10];int size;int i;int element;int data;int index;

    cout<<"enter the size of array:";
    cin>>size;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"array before inserting the element:";

    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }

    cout<<"enter the data after which you want to insert the element:";
    cin>>data;

    for(i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
          index=i;
        }
       
    }

    cout<<"The data is found at:"<<" "<<index;

    for(i=0;i<index;i++)
    {
        arr[i]=arr[i];
    }
    

    for(i=index+1;i<=size;i++)
    {
        arr[i+1]=arr[i];
    }
    cout<<"enter the element to be inserted:";
    cin>>element;

    arr[index+1]=element;

    cout<<"Array after the insertion";

    for(i=0;i<=size;i++)
    {
        cout<<arr[i];
    }

    return 0;


}
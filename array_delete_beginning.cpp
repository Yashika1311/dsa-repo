#include <iostream>
using namespace std;

int main()
{
    int n;int i;
    int* array=new int[n];
    int* new_arr=new int[n-1];
    

    cout<<"Enter the size of an array:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"Array before deleting first elemnt is:";

    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }

    for(i=0;i<n;i++)
    {
        new_arr[i]=array[i+1];
    }

    delete[] array;
    n--;

    cout<<"Array after deleteing first element is:";

    for(i=0;i<n;i++)
    {
        cout<<new_arr[i];
    }

    return 0;
}
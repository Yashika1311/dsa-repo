#include <iostream>
using namespace std;

int main()
{
    int n;int i;int element;int index;
    int* array=new int[n];
    int* new_arr=new int[n-1];
    

    cout<<"Enter the size of an array:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"Array before deleting elemnt is:";

    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<"Enter the element before which you want to delete :";
    cin>>element;

    for(i=0;i<n;i++)
    {
        if(array[i]==element)
        {
            index=i;
        }
    }
    cout<<"The element deleted will be before index:"<<" "<<index;

    for(i=0;i<=index;i++)
    {
        new_arr[i]=array[i];
    }

    for(i=0;i<index-1;i++)
    {
        new_arr[i]=array[i];
    }

    for(i=n-1;i>=index;i--)
    {
        new_arr[i-1]=array[i];
    }

    delete[] array;
    n--;

    cout<<"Array after deletion is:";

    for(i=0;i<n;i++)
    {
        cout<<new_arr[i];
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int i;int index;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<"The array is:";

    for(i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int data;
    cout<<"enter the element you wnat to search:";
    cin>>data;

    for(i=0;i<10;i++)
    {
        if(arr[i]==data)
        {
            index=i;
            
        }
        
        
    }
    cout<<"The data you want is:"<<data<<" "<<"Is Found at index:"<<" "<<index;

   

    
}
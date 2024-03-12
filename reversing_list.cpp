#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of list";
    cin>>n;

    int list[n], stack[n], top=-1;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the"<<" "<<1+i<<" "<<"element:";
        cin>>list[i];
        top++;
        stack[top]=list[i];  
    }
    cout<<"List: ";
    for(int i=0;i<n;i++)
    {
        cout<<list[i]<<" ";
    }
    for(int i=0;i<=n;i++)
    {
        stack[top]=list[i];
        top--;
    }
    cout<<"reversed list:";
    for(int i=0;i<n;i++)
    {
        cout<<list[i]<<" ";
    }
}
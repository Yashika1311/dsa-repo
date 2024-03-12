#include <iostream>
using namespace std;

int main()
{
    int arr;

    cout<<"enter the array size";
    cin>>arr;

    int* calloc_eg = calloc(5, sizeof(int));

    

    cout<<calloc_eg;

    return 0;
    
 
}
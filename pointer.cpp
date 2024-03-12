#include <iostream>
using namespace std;

int main()
{
    int a=5;

    int *ptr;
     
    ptr=&a;

    cout<<a<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(a);
}

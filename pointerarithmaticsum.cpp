#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int b=7;

    int *ptr1=&a;
    int *ptr2=&b;

    int sum=(*ptr1)+(*ptr2);
    int sub=(*ptr1)-(*ptr2);
    int mult=(*ptr1)*(*ptr2);
    int div=(*ptr1)/(*ptr2);

    cout<<sum<<endl;
    cout<<sub<<endl;
    cout<<mult<<endl;
    cout<<div<<endl;

    (*ptr1)++;
    (*ptr2)--;

    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    
 }
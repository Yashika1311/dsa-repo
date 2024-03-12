#include <iostream>
using namespace std;

int main()
{
   void *ptr;
   //char *ptr;
   char c='I';
   ptr=&c;
   cout<<c<<endl;
   cout<<*(char*)ptr<<endl;
   cout<<ptr;
}

// #include <iostream>
// using namespace std;
// int main(){
//     void *ptr2;
//     //char *ptr2;
//     char c='I';
//     ptr2=&c;
//     cout<<c<<endl;
//     //cout<<*ptr2<<endl;
//     cout<<*(char*)ptr2;
//     cout<<ptr2<<endl;

// }

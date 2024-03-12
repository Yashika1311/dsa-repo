 #include <iostream>
using namespace std;

int main()
{
  void* ptr;
  int a =5;
  ptr=&a;
  cout<<a<<endl;
  cout<<*(int*)ptr<<endl;
  cout<<ptr;
}

#include <iostream>
using namespace std;

class Node()
{
    public:
    int data;
    Node* next;

    Node(int value)
    {
        data=value;
        next=nullptr;

    }

};
class stack()
{
    void push(int item)
    {
       Node* newNode=new Node(item);
       newNode->next=top;
       top=newNode; 
    }
};

int main()
{
    stack stackpush;
    int size;int value;

    cout<<"Enter the size of stack :";
    cin>>size;

    cout<<"Enter the values to be inserted";

    for(int i=0;i<size;i++)
    {
      cin>>value;
      stackpush.push(value);
    }

    return 0;

}
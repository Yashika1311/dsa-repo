#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node*next;

};

int main()
{
    Node * n1 = new Node();
    Node*start;
    start = n1;
    n1 -> data = 30;
    n1 ->next = NULL; 

    Node*n2 = new Node();
    n1 -> next = n2;
    n2 ->data = 40;
    n2 ->next = NULL;

    Node*n3 = new Node();
    n2 -> next = n3;
    n3 ->data = 40;
    n3 ->next = NULL;

    // cout<<n1->data<<endl<<n2 ->data<<endl<<n3 ->data;
    int count=0;
    Node *ptr = start;
    while(ptr!=NULL)
    {
        count=count+1;
        //cout<<ptr->data<<endl;
        ptr = ptr->next;
    }

    cout<<"no of nodes ="<<count;

    return 0;
}
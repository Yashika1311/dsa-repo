#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node()
    {
        data=0;
        next=NULL;
    }

};

class singlyLinkedList
{
public:
Node * start;

singlyLinkedList()
{
    start = NULL;
}

void insertAtBeginning(Node * new1)
{
    if(start == NULL)
    {
        start = new1;
        new1-> next = NULL;
        cout<<"first node added..Insertion successful..."<<endl;
    }
    else
    {
        new1->next = start;
        start = new1;

        cout<<"Insertion successful..."<<endl;
    }

}

void displayLinkedList()
{
    Node *ptr=start;

    if((ptr->next)==NULL)
    {
        cout<<ptr->data<<" ";
    }
    else
    {
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    }
}


};

int main()
{
    singlyLinkedList s;
    Node *new_node= new Node();
    cout<<" Enter the data element : "<<endl;
    cin>>new_node->data;

    s.insertAtBeginning(new_node);

    cout<<"Linked list is created... "<<endl;
    s.displayLinkedList();

}
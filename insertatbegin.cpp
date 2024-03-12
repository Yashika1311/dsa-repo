#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
    public:
    int data;
    Node* start;

    LinkedList(): start() {}

    void insertAtBeginning(int Num)
    {
       Node* new_node=new Node(Num);
       new_node->next=start;
       start=new_node;
    }

    void getDataFromUser(int size)
    {

        int Num;
        cout<<"enter"<<size<<" "<<"values"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<"enter"<<i+1<<":";
            cin>>Num;
            insertAtBeginning(Num);
            
        }
        cout<<"Linked list is:"<<Num<<endl;
    }

    void display()
    {
        Node* temp= start;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{   LinkedList list;
    int size;

    cout<<"enter the size of linked list:"<<endl;
    cin>>size;
    list.getDataFromUser(size);

    cout<<"linked list is:";
    list.display();
    int num;
    cin>>num;
    list.insertAtBeginning(num);
    list.display();
    return 0;

}

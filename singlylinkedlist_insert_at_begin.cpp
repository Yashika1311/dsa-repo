#include <iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;
};

   int main() {
    Node* n1=new Node();
    Node* n2=new Node();
    Node* n3=new Node();
    Node* start;
 
    start = n1;
    n1->data = 30;
    n1->next = n2;

     
    
    n2->data = 40;
    n2->next = n3;



    n3->data = 50;
    n3->next = NULL;

    if (n1==NULL)
    {
        cout<<"OVERPLOW";
    }

    Node* new_node=AVAIL;
   }
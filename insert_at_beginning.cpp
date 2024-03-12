#include <iostream>
using namespace std;

// Node class represents a single node in the linked list
class Node {
public:
    int data;
    Node *next;

    // Constructor to initialize data and next pointer
    Node(int d) {
        data = d;
        next = nullptr;
    }
};

// LinkedList class represents the linked list
class LinkedList {
private:
    Node *start; // Pointer to the head of the linked list

public:
    // Constructor to initialize head to nullptr
    LinkedList() {
        start = nullptr;
    }

    // Function to insert element at the beginning of the list
    void insertAtBeginning(int data) {
        Node *newNode = new Node(data);
        newNode->next = start;
        start = newNode;
    }

    // Function to display the elements of the list
    void display() {
        Node *temp = start;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

   
   
};


int main() {
    LinkedList list;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        list.insertAtBeginning(data);
    }

    cout << "Linked List after insertion at beginning: ";
    list.display();

    return 0;
}

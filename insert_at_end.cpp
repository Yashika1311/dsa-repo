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

    // Function to insert element at the end of the list
    void insertAtEnd(int data) {
        Node *newNode = new Node(data);
        if (start == nullptr) {
            start = newNode;
            return;
        }
        Node *temp = start;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to display the elements of the list
    void display() {
        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to delete all nodes of the list
    ~LinkedList() {
        Node *temp;
        while (start != nullptr) {
            temp = start;
            start = start->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    int n;
    cout << "Enter the number of elements in the pre-existing linked list: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        list.insertAtEnd(data);
    }

    cout << "Linked List after insertion at end: ";
    list.display();

    cout << "Enter the number of new elements to insert: ";
    cin >> n;

    cout << "Enter " << n << " new elements to insert at the end: ";
    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        list.insertAtEnd(data);
    }

    cout << "Updated Linked List after insertion: ";
    list.display();

    return 0;
}

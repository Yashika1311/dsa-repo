#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node with given data and next pointing to nullptr
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class representing the linked list
class LinkedList {
private:
    Node* head; // Pointer to the first node in the linked list

public:
    // Constructor to initialize an empty linked list
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the beginning of the linked list
    void insertAtBeginning(int value) {
        // Create a new node with the given value
        Node* newNode = new Node(value);
        // Set the next of the new node to the current head
        newNode->next = head;
        // Update the head to point to the new node
        head = newNode;
    }

    // Function to insert a new node after a specific value in the linked list
    void insertAfterValue(int afterValue, int newValue) {
        Node* temp = head;
        // Search for the node with the given value
        while (temp != nullptr && temp->data != afterValue) {
            temp = temp->next;
        }
        // If the node with the given value is found or temp is nullptr (end of list)
        if (temp != nullptr) {
            // Create a new node with the given value
            Node* newNode = new Node(newValue);
            // Set the next of the new node to the next of temp
            newNode->next = temp->next;
            // Set the next of temp to the new node
            temp->next = newNode;
        } else {
            cout << "Value " << afterValue << " not found in the list." << endl;
        }
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    int afterValue, newData;
    
    // Asking user for input
    cout << "Enter data for the new node: ";
    cin >> newData;
    
    cout << "Enter value after which you want to insert: ";
    cin >> afterValue;
    
    // Inserting new node after a specific value with user-provided data
    list.insertAfterValue(newData ,afterValue);
    
    // Displaying the updated linked list
    cout << "Linked list after inserting after " << afterValue << ": ";
    list.display();

    return 0;
}

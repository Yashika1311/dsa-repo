#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to add a node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    // Function to get data from the user
    void getDataFromUser(int size) {
        int value;
        std::cout << "Enter " << size << " values to create a linked list:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << "Enter value " << i + 1 << ": ";
            std::cin >> value;
            insertAtBeginning(value);
        }
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp = head;
        while (head != nullptr) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }
};

int main() {
    LinkedList list;
    int size;

    std::cout << "Enter the size of the linked list: ";
    std::cin >> size;
    list.getDataFromUser(size);

    std::cout << "Linked List: ";
    list.display();

    return 0;
}

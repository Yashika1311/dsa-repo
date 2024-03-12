#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* start;


    LinkedList() : start(nullptr) {}

    // Function to add a node at the beginning of the list
    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = start;
        start = newNode;
    }

    // Function to add a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (start == nullptr) {
            start = newNode;
            return;
        }
        Node* temp = start;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to display the list
    void display() {
        Node* temp = start;
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
            insertAtEnd(value);
        }
    }

    // Function to delete the first node
    void deleteFirstNode() {
        if (start == nullptr) {
            std::cout << "List is empty. Nothing to delete.\n";
            return;
        }
        Node* temp = start;
        start = start->next;
        delete temp;
    }

    // Function to delete the last node
    void deleteLastNode() {
        if (start == nullptr) {
            std::cout << "List is empty. Nothing to delete.\n";
            return;
        }
        if (start->next == nullptr) {
            delete start;
            start = nullptr;
            return;
        }
        Node* temp = start;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Function to delete node after given value
    void deleteNodeAfterValue(int value) {
        Node* temp = start;
        while (temp != nullptr && temp->data != value) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) {
            std::cout << "Value not found or no node after given value.\n";
            return;
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // Function to delete node before given value
    void deleteNodeBeforeValue(int value) {
        if (start == nullptr || start->next == nullptr || start->data == value) {
            std::cout << "No node before given value or list is empty.\n";
            return;
        }
        if (start->next->data == value) {
            deleteFirstNode();
            return;
        }
        Node* prev = start;
        Node* current = start->next;
        while (current->next != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }
        if (current->data == value) {
            prev->next = current->next;
            delete current;
        }
        else {
            std::cout << "Given value not found.\n";
        }
    }

    void insertafternum(int value,int Num)
    {
         Node* current=start;
         Node* prev=current;
         Node* newNode;

         while(prev->data!=Num)
         {
           prev=prev->next;
         }
         newNode->next=prev->next;
           prev->next=newNode;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp = start;
        while (start != nullptr) {
            start = start->next;
            delete temp;
            temp = start;
        }
    }

};

int main() {
    LinkedList list;
    int size, choice, value, Num;

    std::cout << "Enter the size of the linked list: ";
    std::cin >> size;
    list.getDataFromUser(size);

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Insert new node at start\n";
        std::cout << "2. Insert new node at end\n";
        std::cout << "3. Insert new node after given value\n";
        std::cout << "4. Insert new node before given value\n";
        std::cout << "5. Delete first node\n";
        std::cout << "6. Delete last node\n";
        std::cout << "7. Delete node after given value\n";
        std::cout << "8. Delete node before given value\n";
        std::cout << "9. Display the list\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to insert at start: ";
                std::cin >> value;
                list.insertAtStart(value);
                break;
            case 2:
                std::cout << "Enter value to insert at end: ";
                std::cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                std::cout << "Enter value after which to insert: ";
                std::cin >> Num;
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                // Implementation left as an exercise
                break;
            case 4:
                std::cout << "Enter value before which to insert: ";
                std::cin >> Num;
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                // Implementation left as an exercise
                list.insertafternum(value,Num);
                break;
            case 5:
                list.deleteFirstNode();
                break;
            case 6:
                list.deleteLastNode();
                break;
            case 7:
                std::cout << "Enter value after which to delete: ";
                std::cin >> Num;
                // Implementation left as an exercise
                break;
            case 8:
                std::cout << "Enter value before which to delete: ";
                std::cin >> Num;
                // Implementation left as an exercise
                break;
            case 9:
                std::cout << "Linked List: ";
                list.display();
                break;
            case 0:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;

public:
    Array(int s) {
        size = s;
        arr = new int[size];
    }

    

    void setElement(int index, int value) {
        arr[index] = value;
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int search(int data) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == data) {
                return i; // Return index if element found
            }
        }
        return -1; // Return -1 if element not found
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    Array arr(size);

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        int value;
        cin >> value;
        arr.setElement(i, value);
    }

    cout << "Array: ";
    arr.display();

    int data;
    cout << "Enter the element to search for: ";
    cin >> data;

    int index = arr.search(data);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

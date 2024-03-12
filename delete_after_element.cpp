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

    ~Array() {
        delete[] arr;
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

    void deleteAfter(int data) {
        int index = -1;
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] == data) {
                index = i;
                break;
            }
        }
        
        if (index == -1 || index == size - 1) {
            cout << "Element not found or it's the last element. Cannot delete." << endl;
            return;
        }

        int *newArr = new int[size - 1];
        for (int i = 0; i <= index; ++i) {
            newArr[i] = arr[i];
        }
        for (int i = index + 2; i < size; ++i) {
            newArr[i - 1] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        size--;
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

    cout << "Array before deletion: ";
    arr.display();

    int data;
    cout << "Enter the element after which to delete: ";
    cin >> data;

    arr.deleteAfter(data);

    cout << "Array after deletion after given element: ";
    arr.display();

    return 0;
}

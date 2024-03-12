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

    void deleteAtend() {
        if (size == 0) {
            cout << "Array is empty. Cannot delete." << endl;
            return;
        }

        int *newArr = new int[size - 1];
        for (int i = 0; i < size-1; ++i) {
            newArr[i] = arr[i];
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

    arr.deleteAtend();

    cout << "Array after deletion at the beginning: ";
    arr.display();

    return 0;
}

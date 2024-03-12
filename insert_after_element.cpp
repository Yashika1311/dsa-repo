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

    void insertafter(int data, int newData) {
        int index = -1;
        for (int i = 0; i<size; ++i) {
            if (arr[i] == data) {
                index = i;
                break;
            }
        }
        
        if (index == -1) {
            cout << "Data not found in the array." << endl;
            return;
        }

        int *newArr = new int[size + 1];
        
        for (int i = 0; i<=index; ++i) {
            newArr[i] = arr[i];
        }

        newArr[index+1] = newData;

        for (int i = index+1; i <size; ++i) {
            newArr[i+1] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        size++;
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

    cout << "Array before insertion: ";
    arr.display();

    int data, newData;
    cout << "Enter the element to insert after: ";
    cin >> data;
    cout << "Enter the new element: ";
    cin >> newData;

    arr.insertafter(data, newData);

    cout << "Array after after: ";
    arr.display();

    return 0;
}

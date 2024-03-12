#include <iostream>
using namespace std;

int main() {
    int size; // Variable to store the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;
    
    // Declare an array of integers with the specified size
    int myArray[size];
    
    // Prompt the user to enter values for the array
    cout << "Enter " << size << " integer values:" << endl;
    for(int i = 0; i < size; ++i) {
        cout << "Enter value " << i+1 << ": ";
        cin >> myArray[i];
    }
    
    // Print the elements of the array
    cout << "The values you entered are: ";
    for(int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    
    return 0;
}

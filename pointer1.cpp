#include <iostream>

int main() {
    int num = 10; // Declare an integer variable
    int *ptr;     // Declare a pointer to an integer

    ptr = &num;   // Assign the address of num to the pointer ptr

    // Print the value of num and the value pointed to by ptr
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
    std::cout<<"Address of pointer is:"<<ptr<<std::endl;

    // Change the value of num through the pointer ptr
    *ptr = 20;

    // Print the updated value of num and the value pointed to by ptr
    std::cout << "Updated value of num: " << num << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;
     std::cout<<"Address of pointer is:"<<ptr<<std::endl;

    return 0;
}

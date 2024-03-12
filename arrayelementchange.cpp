#include <iostream>
using namespace std;

int main() {
    // Creating an array of integers
    int myArray[5] = {1, 2, 3, 4, 5};
    myArray[2]=6;
    cout<<myArray[2]<<endl;
    
    // Printing elements of the array
  
 
        for(int i = 0; i < 5; ++i) cout << myArray[i] << " ";

   
    return 0;
}

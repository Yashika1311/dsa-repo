#include <iostream>
using namespace std;

int main()
{
    int n, largest,second_largest;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    largest = arr[0];
    second_largest=arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            largest = arr[i];
        }
        if (arr[i]>second_largest)
        {
            second_largest=arr[i];
            
        }
    }
    cout << "Largest element in array is: " << largest<<endl;
    cout<<second_largest;
    return 0;
}
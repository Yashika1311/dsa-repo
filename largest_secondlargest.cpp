
#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second = arr[1];

    if (second > largest) 
    {
        swap(largest, second);
    }

    for (int i = 2; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second) 
        {
            second = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;
    cout << "Second largest element: " << second << endl;

    return 0;
}
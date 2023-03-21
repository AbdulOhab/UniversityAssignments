#include <iostream>
using namespace std;

int main()
{
    // Initialize an array
    int arr[] = { 21, 47, 87, 35, 92 };

    // Access each element
    cout << "Array elements: ";
    for(int i = 0; i < sizeof(arr)/sizeof(*arr); ++i)
        cout << arr[i] << " ";
    cout << endl;

    arr[2] = 30;
    arr[3] = 64;
    cout << "Array elements: ";
    for(int i = 0; i < sizeof(arr)/sizeof(*arr); ++i)
        cout << arr[i] << " ";
    cout << endl;
}

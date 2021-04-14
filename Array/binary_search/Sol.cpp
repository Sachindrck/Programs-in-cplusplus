// Binary Search

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Length of array:  ";
    cin >> n;
    int arr[n];
    
    cout << "Enter Sorted elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter Key to Search: ";
    int key;
    cin >> key;
    
    int l = 0, h = (n-1), mid;
    
    while (l <= h) {
        
        mid = (l+h)/2;
        if (key == arr[mid]) {
            cout << "Found at " << mid;
            return 0;
        } else if (key > arr[mid]) l = mid + 1;
        else h = mid - 1;
    }
    
    cout << "Not Found !";
}

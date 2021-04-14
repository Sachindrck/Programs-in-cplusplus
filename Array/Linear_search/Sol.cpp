// Linear Search

#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    int key = 10;
    bool flag = true;
    
    for (auto x: arr) {
        if (x == key) {
            flag = false;
            cout << "Found !";
            break;
        }
    }
    
    if (flag) cout << "Not Found !";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int A[5] = {2, 3, 4, 1, 9};
    
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Array after " << n << " right-rotations: ";
    
    while (n--)
    {
        int t = A[4];
        for (int i = 3; i >= 0; i--)
        {
            A[i+1] = A[i];
        }
        A[0] = t;
    }
    
    for (int j = 0; j < 5; j++)
    {
        cout << A[j] << " ";
    }
    return 0;
}


// Iterative code to find the factors of a number.
// Naive approach

#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to program for finding factors!\n";
    cout << "Enter the number: ";
    long int n;
    cin >> n;
    
    cout << "Factors of the number " << n << " are: ";
    for (long int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

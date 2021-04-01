
// Iterative code to check weather a number is perfect or not.

// A number is perfect if (2 * number) = sum of all of it's factors.
// Ex: n = 6
// Factors of 6 - 1, 2, 3, 6  Sum of factors = 12
// (2 * 6) = 12 Hence 6 is a perfect number.

// Ex: n = 8 ....... check yourshelf!

#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to program for checking a number is perfect or not!\n";
    cout << "Enter the number: ";
    long int n;
    cin >> n;
    long long int sum = 0;
    
    for (long int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    cout << endl;
    
    if ((2*n) == sum) {
        cout << n << " is a Perfect Number.";
    } else {
        cout << n << " is not a Perfect Number.";
    }
    return 0;
}

// Iterative code to find the factorial of a number.
// number should be in between 1-25.
// Naive approach

#include <iostream>
using namespace std;

int main()
{
    cout<<"Welcome to factorial calculator!\n";
    cout << "Enter the number: ";
    long int n;
    cin >> n;
    
    long long int fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << endl;
    cout << n << "! = " << fact;
    return 0;
}

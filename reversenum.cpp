// Iterative code to find the reverse of a number.

#include <iostream>

using namespace std;

int main()
{
    cout<<"Welcome to program for finding the reverse of a number!\n\n";
    cout << "Enter the number: ";
    long long int n, rev = 0;
    cin >> n;
    
    while (n > 0) {
        int d;
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    
    cout << endl;
    
    cout << "Reverse of number is: " << rev;
    
    return 0;
}

// Iterative code to check weather a number is Armstrong number or not.

// A number is armstrong number if cubes of its digits is equal to the number itself.

// Ex: n = 153
// Sum of cubes of digits -> 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 = n

// Ex: n = 121
// Sum of cubes of digits -> 1^3 + 2^3 + 1^3 = 1 + 8 + 1 = 10 != n

// Ex: n = 407 ....... check yourshelf!

#include <iostream>

using namespace std;

int main()
{
    cout<<"Welcome to program for checking weather a number is armstrong or not!\n\n";
    cout << "Enter the number: ";
    long long int n, sumcubes = 0, temp;
    cin >> n;
    
    temp = n;
    while (temp > 0) {
        int d;
        d = temp % 10;
        sumcubes += (d*d*d);
        temp = temp / 10;
    }
    
    cout << endl;
    
    if (sumcubes == n) {
        cout << n << " is an armstrong number!";
    } else {
        cout << n << " is not an armstrong number!";
    }
    
    return 0;
}

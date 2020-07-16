
// Program to find GCD of two numbers!

// A simple solution is to find all prime factors of both numbers, then find intersection of all 
// factors present in both numbers. Finally return product of elements in the intersection.

// An efficient solution is to use Euclidean algorithm which is the main algorithm used for this purpose. 
// The idea is, GCD of two numbers doesn’t change if smaller number is subtracted from a bigger number.

#include <iostream>

using namespace std;

int main()
{
    cout<<"Welcome to GCD calculator!";
    
    long int m, n, a, b;
    
    cout << "Enter two numbers: ";
    cin >> m >> n;
    
    a = m;
    b = n;
    
    while (m != n) {
        
        if (m > n)
            m = m - n;
        else if (n > m)
            n = n - m;
            
    }
    
    cout << "GCD of " << a << " and " << b << " is: " << m;

    return 0;
}

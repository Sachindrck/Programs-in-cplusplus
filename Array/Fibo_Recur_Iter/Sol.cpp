// To print the nth fibonacci number.
// Using loops -- Iterative method ---- O(n)
// Using recursion ---- O(2^n)
// Recursion with memoization ---- O(n)

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long int fibIt (int n)
{
    
    long long int t0 = 0, t1 = 1;
    long long s = 0;
    
    if (n < 2)
    {
        return n;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }
    
}
// ---------------------------------------------------

int fibRe (int n)
{
    if (n < 2)
        return n;
    
    return fibRe(n-2) + fibRe(n-1);
}
// ---------------------------------------------------


int main()
{
    
    
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    auto start = high_resolution_clock::now();
    
    long long res = fibRe(n);
    cout << n << "th fibonacci number: " << res << endl;
  
  
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by function: "
         << duration.count() << " microseconds" << endl; 

    return 0;
}


// Implementing Diagonal matrix using 1-D array.

#include <iostream>
using namespace std;

void seT(int A[], int r, int c, int x)
{
    if (r == c)
        A[r-1] = x;
}

void geT(int A[], int r, int c)
{
    if (r == c)
        cout << "The element at position (" << r << "," << c << ") is: " << A[r-1];
    else
        cout << "The element at position (" << r << "," << c << ") is: " << 0;
}

void display(int A[], int n)
{
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            if (i == j)
                cout << A[i-1] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter dimension of Diagonal matrix (nxn) n: ";
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter (" << i+1 << "," << i+1 << ")th element :";
        cin >> x;
        seT(A, i+1, i+1, x);
    }

    geT(A, 1, 1);
    cout << endl;

    display(A, n);

    return 0;
}

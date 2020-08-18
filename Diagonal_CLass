
// Implementing Diagonal matrix using 1-D array.

#include <iostream>
using namespace std;

class Diagonal
{
private:
    int n;
    int* A;

public:

    Diagonal(int n)              // Constructor
    {
        this->n = n;
        A = new int[n];
    }

    void seT(int r, int c, int x);          // Setters
    void geT(int r, int c);                 // Getters
    void Display();
    ~Diagonal()                 // Destructor
    {
        delete []A;
    }
};

void Diagonal :: seT(int r, int c, int x)
{
    if (r == c)
        A[r-1] = x;
}

void Diagonal :: geT(int r, int c)
{
    if (r == c)
        cout << "The element at position (" << r << "," << c << ") is: " << A[r-1];
    else
        cout << "The element at position (" << r << "," << c << ") is: " << 0;
}

void Diagonal :: Display()
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

    Diagonal d(n);          // Instance of a class

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter (" << i+1 << "," << i+1 << ")th element :";
        cin >> x;
        d.seT(i+1, i+1, x);
    }

    d.geT(1, 1);
    cout << endl;

    d.Display();

    return 0;
}

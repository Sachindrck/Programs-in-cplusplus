#include <iostream>
using namespace std;

class Term
{
public:
    int coeff;
    int exp;
};

class Poly
{
public:
    int n;
    Term *t;

};

int main()
{
    Poly p;

    cout << "Enter number of non-zero terms: ";
    cin >> p.n;

    p.t = new Term[p.n];

    cout << "Enter polynomial terms: <coeff> <space> <exp>" << endl;
    for (int i = 0; i < p.n; i++)
    {
        cout << "Term no " << i+1 << " : ";
        cin >> p.t[i].coeff >> p.t[i].exp;
    }

    cout << "\nPolynomial : ";
    for (int j = 0; j < p.n; j++)
    {
        cout << p.t[j].coeff << "x^" << p.t[j].exp;
        if (j != p.n - 1)
            cout << " + ";
    }

    return 0;
}

// Output : 
/*
Enter number of non-zero terms: 4
Enter polynomial terms: <coeff> <space> <exp>
Term no 1 : 6 4
Term no 2 : 4 3
Term no 3 : 9 2
Term no 4 : 7 0

Polynomial : 6x^4 + 4x^3 + 9x^2 + 7x^0
Process returned 0 (0x0)   execution time : 16.051 s
Press any key to continue.
*/

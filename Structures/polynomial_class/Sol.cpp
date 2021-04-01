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
private:
    int n;
    Term *t;

public:
    Poly(int n)
    {
        this->n = n;
        t = new Term[this->n];
    }
    ~Poly()
    {
        delete []t;
    }

    void read()
    {
        cout << "Enter polynomial terms: <coeff> <space> <exp>" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Term no " << i+1 << " : ";
            cin >> t[i].coeff >> t[i].exp;
        }
    }

    void display()
    {
        cout << "\nPolynomial : ";
        for (int j = 0; j < n; j++)
        {
            cout << t[j].coeff << "x^" << t[j].exp;
            if (j != n - 1)
                cout << " + ";
        }
        cout << endl;
    }

    Poly add(Poly &p)
    {
        int i, j, k;
        i = j = k = 0;

        Poly *sum = new Poly(n + p.n);

        sum->t = new Term[sum->n];

        while (i < n && j < p.n)
        {
            if (t[i].exp > p.t[j].exp)
                sum->t[k++] = t[i++];
            else if (t[i].exp < p.t[j].exp)
                sum->t[k++] = p.t[j++];
            else
            {
                sum->t[k] = t[i];
                sum->t[k++].coeff = t[i++].coeff + p.t[j++].coeff;
            }
        }

        for (; i < n; i++)
            sum->t[k++] = t[i];
        for (; j < p.n; j++)
            sum->t[k++] = p.t[j];
        sum->n = k;
        return *sum;
    }


};

int main()
{

    Poly p1(3);
    p1.read();
    p1.display();

    Poly p2(3);
    p2.read();
    p2.display();

    Poly p = p1.add(p2);
    cout << "Polynomial after addition is: "
    p.display();

    return 0;
}

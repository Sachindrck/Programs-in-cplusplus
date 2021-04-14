// Program to add two rational numbers.
// `+` and `<<` operators are overloaded.

#include <iostream>

using namespace std;

class rational
{
private:
    int num;
    int denom;
public:

    rational(int n = 0, int d = 0)  // Constructor
    {
        num = n;
        denom = d;
    }

    rational operator +(rational r)  // `+` op. overloading function.a
    {
        rational t;
        if (denom == r.denom)
        {
            t.num = num + r.num;
            t.denom = denom;
        }
        else
        {
            t.num = (r.denom * num) + (denom * r.num);
            t.denom = denom * r.denom;
        }
        return t;
    }

    friend ostream & operator <<(ostream &o, rational &r);    // `<<` op. overloading function.
};

ostream & operator <<(ostream &o, rational &r)
    {
        o << "Rational number after sum: " << r.num << " / " << r.denom;
        return o;
    }

int main()
{
    rational r1(2, 7), r2(3, 7), r3; // objects

    r3 = r1 + r2;          // sum of two rationals(operator overloading)

    cout << r3 << endl;
    return 0;
}

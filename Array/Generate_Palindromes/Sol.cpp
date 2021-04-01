// Given an integer n, print all palindromic numbers from 1 to n.
// Palindromes are those numbers that reads the same backwards as forwards.

/*Sample Input 1 :
	12
Sample Output 1 :
	1
	2
	3
	4
	5
	6
	7
	8
	9
	11*/


#include <iostream>

using namespace std;

bool checkPali(int i)
{
    int r, rev = 0;
    int m = i;
    
    while(i > 0) {
        r = i % 10;
        rev = rev*10 + r;
        i = i / 10;
    }
    
    if (m == rev) {
        return true;
    } else return false;
}


void palinGenerator(int n)
{
	// Write your code here
    
    for (int i = 1; i < n; i++) {
        if (checkPali(i)) {
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    
    palinGenerator(n);

    return 0;
}

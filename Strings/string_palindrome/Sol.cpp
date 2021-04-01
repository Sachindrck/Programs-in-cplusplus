// Code to check a given string/word is palindrome or not.
// Method 1


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, rev = "";
    cout << "Enter the word to check palindrome: ";
    cin >> s;
    
    int n = (int)s.length();
    
    for (int i = (n-1); i >= 0 ; i--) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
        
        rev += s[i];
    }
    cout << endl;
    
    if (s == rev) {
        cout << "It is a palindrome!" << endl;
    } else cout << "Not a palindrome.";
    

    return 0;
}


// Method 2


#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    int l = s.length();
    int i = 0;
    int j = l-1;
    
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        
        i++;
        j--;
    }
    
    return true;
}

int main()
{
    string a = "madam";
    
    cout << isPalindrome(a);
    
    return 0;
}


// Code to find Number of words, vowels and consonants in a string.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int wordcount = 0;
    
    cout << s << endl;
    
    int cons = 0, vow = 0, t = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && s[i+1] == ' ') {
            s[i] = '.';
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 and s[i] <= 122)) {
            t++;
        }
    }
    
    
    cout << s << endl;
    
    for (int i = 0; s[i] != '\0'; i++) {
        
        if (s[i] == 'A' || s[i] == 'a'|| s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u') {
            vow++;
        } else if (s[i] == ' ') {
            wordcount++;
        } else {
            cons++;
        }
    }
    
    
    cout << "No of words: " << wordcount+1 << endl;
    cout << "No of vowels: " << vow << endl;
    cout << "No of consonants: " << t-vow << endl;
    

    return 0;
}

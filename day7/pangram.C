#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int hash[26] = {0};  

    for (char c : s) {
        if (c >= 'A' && c <= 'Z')
            c = c + 32;  
        if (c >= 'a' && c <= 'z')
            hash[c - 'a'] = 1;
    }

    bool pangram = true;
    for (int i = 0; i < 26; i++) {
        if (hash[i] == 0) {
            pangram = false;
            break;
        }
    }

    if (pangram)
        cout << "The string is a pangram.";
    else
        cout << "The string is NOT a pangram.";

    return 0;
}
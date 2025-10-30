#include <iostream>
using namespace std;

int minDeletionsToMakePalindrome(string s) {
    int freq[256] = {0};
    
    for (char c : s)
        freq[c]++;
    
    int oddCount = 0;
    for (int i = 0; i < 256; i++)
        if (freq[i] % 2 != 0)
            oddCount++;
    
   
    return (oddCount <= 1) ? 0 : (oddCount - 1);
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    
    cout << "Minimum deletions: " << minDeletionsToMakePalindrome(s) << endl;
    return 0;
}
#include <iostream>
#include <unordered_map>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, int> count;

    for (char c : s1)
        count[c]++;

    for (char c : s2)
        count[c]--;

    for (auto it : count)
        if (it.second != 0)
            return false;

    return true;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (areAnagrams(s1, s2))
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are NOT anagrams." << endl;

    return 0;
}
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool checkPalindrome(string s)
{
    // Convert to lowercase
    for (auto &i : s) {
        i = tolower(i);
    }

    // Remove special characters, tabs, and spaces
    string cl = "";
    for (char c : s) {
        if (isalnum(c)) { // keep only letters and digits
            cl += c;
        }
    }

    // Check palindrome
    int i = 0;
    int e = cl.size() - 1;
    while (i < e) {
        if (cl[i] != cl[e]) {
            return false;
        }
        i++;
        e--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (checkPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "=== C++ STRING FUNCTIONS DEMONSTRATION ===\n\n";

    // ------------------------------
    // 1. std::string (C++ Strings)
    // ------------------------------
    string s1 = "Hello";
    string s2 = "World";

    // Concatenation: `+` joins two strings
    string s3 = s1 + " " + s2;
    cout << "Concatenation: " << s3 << endl; // Hello World

    // length() / size(): returns number of characters
    cout << "Length of s3: " << s3.length() << endl;

    // empty(): returns true if string has no characters
    cout << "Is s3 empty?: " << (s3.empty() ? "Yes" : "No") << endl;

    // clear(): removes all characters, making it empty
    s3.clear();
    cout << "After clear(), s3 is empty? " << (s3.empty() ? "Yes" : "No") << endl;

    string str = "Programming";

    // Access characters
    cout << "Access using []: " << str[0] << endl;   // direct, no bounds check
    cout << "Access using at(): " << str.at(1) << endl; // throws exception if out of range
    cout << "Front: " << str.front() << ", Back: " << str.back() << endl;

    // push_back(): add char at end
    str.push_back('X');
    cout << "After push_back('X'): " << str << endl;

    // pop_back(): remove last char
    str.pop_back();
    cout << "After pop_back(): " << str << endl;

    // append(): add string at end
    str.append(" is fun");
    cout << "Append: " << str << endl;

    // insert(pos, str): insert substring starting at index `pos`
    str.insert(0, "C++ ");
    cout << "Insert: " << str << endl;

    // erase(pos, len): remove `len` characters starting from `pos`
    str.erase(0, 4);
    cout << "Erase first 4 chars: " << str << endl;

    // replace(pos, len, newstr): replace part of string with new string
    str.replace(0, 11, "Coding");
    cout << "Replace: " << str << endl;

    // find(substring): returns index if found, else string::npos
    cout << "Find 'fun': position " << str.find("fun") << endl;

    // substr(pos, len): extract substring from pos of length len
    cout << "Substring (0,6): " << str.substr(0, 6) << endl;

    // compare(): returns 0 if equal, <0 if smaller, >0 if greater
    string cmp = "Coding is cool";
    cout << "Compare strings: " << str.compare(cmp) << " (0 means equal)\n";

    // capacity(): current allocated storage
    cout << "Capacity: " << str.capacity() << endl;

    // resize(n, char): change length, fill with `char` if expanding
    str.resize(20, '*');
    cout << "Resize to 20 chars: " << str << endl;

    // c_str(): get const char* (C-style string)
    const char* cstr = str.c_str();
    cout << "C-style string: " << cstr << endl;

    // Conversion between numbers and strings
    int num = 1234;
    string numStr = to_string(num);   // int -> string
    cout << "Number to string: " << numStr << endl;

    cout << "String to integer (stoi): " << stoi("456") << endl; // string -> int

    // Iterators: allow looping like a container
    cout << "Using iterators: ";
    for (auto it = str.begin(); it != str.end(); ++it) cout << *it;
    cout << endl;

    // ------------------------------
    // 2. C-Style Strings (cstring)
    // ------------------------------
    char c1[50] = "Hello";
    char c2[50] = " World";

    // strcat(dest, src): append src to dest
    strcat(c1, c2);
    cout << "\nC-string strcat: " << c1 << endl;

    // strcpy(dest, src): copy src into dest
    strcpy(c2, "Copied!");
    cout << "C-string strcpy: " << c2 << endl;

    // strcmp(s1, s2): compare two C-strings
    // return 0 if equal, <0 if s1 < s2, >0 if s1 > s2
    cout << "Compare strcmp(c1,c2): " << strcmp(c1, c2) << endl;

    // strlen(s): returns length (excluding null terminator)
    cout << "Length strlen(c1): " << strlen(c1) << endl;

    // strstr(str, sub): return pointer to first occurrence of sub
    char *pos = strstr(c1, "World");
    if (pos) cout << "Found substring 'World' at index: " << pos - c1 << endl;

    // strtok(str, delim): split string by delimiter (like "split" in Python)
    char tokenStr[50] = "one,two,three";
    char* token = strtok(tokenStr, ",");
    cout << "Tokenizing: ";
    while (token) {
        cout << token << " ";
        token = strtok(NULL, ","); // NULL continues from last position
    }
    cout << endl;

    // ------------------------------
    // 3. Utility Functions (algorithm + cctype)
    // ------------------------------
    string util = "AbCdEfGh123";

    // transform(begin, end, dest, func): apply func on each char
    transform(util.begin(), util.end(), util.begin(), ::toupper);
    cout << "\nTo Uppercase: " << util << endl;

    transform(util.begin(), util.end(), util.begin(), ::tolower);
    cout << "To Lowercase: " << util << endl;

    // reverse(begin, end): reverse the string
    reverse(util.begin(), util.end());
    cout << "Reversed: " << util << endl;

    // count(begin, end, value): count occurrences
    int countA = count(util.begin(), util.end(), 'a');
    cout << "Count of 'a': " << countA << endl;

    // sort(begin, end): sort characters lexicographically
    sort(util.begin(), util.end());
    cout << "Sorted: " << util << endl;

    // ------------------------------
    // Character classification (from <cctype>)
    // ------------------------------
    char ch = '9';
    cout << "\nCharacter checks for '" << ch << "':\n";
    cout << "isdigit? " << (isdigit(ch) ? "Yes" : "No") << endl;
    cout << "isalpha? " << (isalpha(ch) ? "Yes" : "No") << endl;
    cout << "isalnum? " << (isalnum(ch) ? "Yes" : "No") << endl;
    cout << "toupper: " << (char)toupper(ch) << endl;
    cout << "tolower: " << (char)tolower('X') << endl;

    return 0;
}

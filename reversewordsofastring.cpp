#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word, result = "";

        while (str >> word) {
            // put each new word at the beginning
            if (result.empty()) {
                result = word;
            } else {
                result = word + " " + result;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    string s = "  the sky   is blue  ";
    cout << "Original: \"" << s << "\"" << endl;

    string ans = sol.reverseWords(s);
    cout << "Reversed: \"" << ans << "\"" << endl;

    return 0;
}
// we used streams into it from stream it word look like a whole word if we take one thing from stream that will be word not character
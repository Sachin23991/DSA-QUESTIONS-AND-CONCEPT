#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i = m - 1;       // Last valid element in a
        int j = n - 1;       // Last element in b
        int k = m + n - 1;   // Last position in a

        while (i >= 0 && j >= 0) {
            if (a[i] > b[j]) {
                a[k--] = a[i--];
            } else {
                a[k--] = b[j--];
            }
        }

        while (j >= 0) { // If b still has elements
            a[k--] = b[j--];
        }
    }
};

int main() {
    Solution sol;

    vector<int> a = {1, 3, 5, 0, 0, 0}; // 'a' has extra space for elements from b
    vector<int> b = {2, 4, 6};
    int m = 3; // Number of valid elements in a
    int n = 3; // Number of elements in b

    sol.merge(a, m, b, n);

    cout << "Merged array: ";
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void rotate90(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate90(mat);

    cout << "Matrix Rotated 90 Degree Clockwise:\n";
    for (auto &row : mat) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

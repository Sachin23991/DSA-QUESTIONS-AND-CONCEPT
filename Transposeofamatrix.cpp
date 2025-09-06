#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Only swap upper triangle with lower triangle
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    transpose(mat);

    cout << "Transpose Matrix:\n";
    for (auto &row : mat) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

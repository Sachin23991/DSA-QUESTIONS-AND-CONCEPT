#include <iostream>
#include <vector>
using namespace std;

// Function to generate Pascal's Triangle
vector<vector<int>> generatePascal(int n) {
    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++) {
        pascal[i].resize(i + 1);   // row has (i+1) elements
        pascal[i][0] = pascal[i][i] = 1; // first and last element are 1

        // Fill middle elements
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    return pascal;
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    vector<vector<int>> triangle = generatePascal(n);

    // Print Pascal's Triangle
    for (int i = 0; i < n; i++) {
        // spacing for pyramid look
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

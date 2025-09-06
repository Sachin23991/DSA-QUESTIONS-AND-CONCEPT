/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    int cols;
    cout<<"Enter the number of cols: ";
    cin >> cols;
    
    
    vector<vector<int>>v(rows,vector<int>(cols));
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
           cin >> v[i][j];
        }
        cout<<endl;
    }


    for(int i = 0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // -----------------------------
    // DECLARATION AND INITIALIZATION
    // -----------------------------

    // Method 1: Declare empty 2D vector
    vector<vector<int>> vec;

    // Method 2: Declare with fixed size (3 rows, 4 cols, initialized with 0)
    vector<vector<int>> grid(3, vector<int>(4, 0));

    // Method 3: Initialize directly with values
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // -----------------------------
    // BASIC FUNCTIONS
    // -----------------------------

    // size() → number of rows
    cout << "Rows in mat: " << mat.size() << endl;

    // mat[i].size() → number of columns in row i
    cout << "Columns in mat row 0: " << mat[0].size() << endl;

    // Access element using mat[row][col]
    cout << "Element at (1,2): " << mat[1][2] << endl;  // (row 1, col 2) → 6

    // at() → safer access with bounds checking
    cout << "Element at (2,1) using at(): " << mat.at(2).at(1) << endl;  // → 8

    // -----------------------------
    // MODIFYING ELEMENTS
    // -----------------------------
    mat[0][0] = 10; // Direct assignment
    mat.at(2).at(2) = 99; // Using at()

    // -----------------------------
    // INSERTING AND REMOVING
    // -----------------------------

    // push_back(row) → add a new row at end
    mat.push_back({11, 12, 13});
    cout << "Rows after push_back: " << mat.size() << endl;

    // pop_back() → remove last row
    mat.pop_back();
    cout << "Rows after pop_back: " << mat.size() << endl;

    // insert → insert a row at given position
    mat.insert(mat.begin() + 1, {100, 101, 102});
    cout << "Row 1 first element after insert: " << mat[1][0] << endl;

    // erase → remove a row at given position
    mat.erase(mat.begin() + 1);
    cout << "Row 1 first element after erase: " << mat[1][0] << endl;

    // clear() → remove all rows
    vector<vector<int>> temp = mat;
    temp.clear();
    cout << "Rows after clear: " << temp.size() << endl;

    // empty() → check if 2D vector has no rows
    cout << "Is temp empty? " << (temp.empty() ? "Yes" : "No") << endl;

    // -----------------------------
    // ITERATION
    // -----------------------------

    // Using traditional loops
    cout << "\nMatrix using for loop:" << endl;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // Using range-based for loop
    cout << "\nMatrix using range-based for loop:" << endl;
    for (auto &row : mat) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // -----------------------------
    // SWAP & RESIZE
    // -----------------------------

    vector<vector<int>> a = {{1, 2}, {3, 4}};
    vector<vector<int>> b = {{9, 9}, {8, 8}};

    // swap() → swap contents of 2 matrices
    a.swap(b);
    cout << "\nFirst element of a after swap: " << a[0][0] << endl;

    // resize() → change number of rows
    a.resize(5, vector<int>(2, -1));  // 5 rows, new rows filled with -1
    cout << "Rows in a after resize: " << a.size() << endl;

    // -----------------------------
    // ADVANCED
    // -----------------------------

    // front() → first row, back() → last row
    cout << "First row first element: " << mat.front().front() << endl;
    cout << "Last row last element: " << mat.back().back() << endl;

    // assign() → reassign with given rows and cols
    vector<vector<int>> assignVec;
    assignVec.assign(4, vector<int>(3, 7)); // 4 rows, 3 cols, all 7
    cout << "\nAssigned Matrix:" << endl;
    for (auto &row : assignVec) {
        for (auto &val : row) cout << val << " ";
        cout << endl;
    }

    return 0;
}

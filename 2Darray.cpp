#include <iostream>
using namespace std;

bool findele(int arr[][100], int target, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}
void rowwisesum(int arr[][100],int row , int col){

    for(int i = 0 ; i<row;i++){
        int sum = 0;
        for(int j = 0;j<col;j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
        
    }
}
void columnwisesum(int arr[][100],int row , int col){

    for(int i = 0 ;i < col ; i++){
        int sum = 0;
        for(int j = 0 ; j< row ; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
}
int main() {
    int row, col;
    cout << "Enter rows and columns: ";
    cin >> row >> col;

    int arr[100][100];  // fixed max size

    // Fill row-wise
    cout << "Enter elements row-wise:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Row-wise matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Fill col-wise
    /*cout << "\nEnter elements column-wise:\n";
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            cin >> arr[i][j];
        }
    }

    cout << "Column-wise matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/


    // Search
    int target;
    cout << "\nEnter element to search: ";
    cin >> target;

    if (findele(arr, target, row, col)) {
        cout << "Element found\n";
    } else {
        cout << "Element not found\n";
    }

    rowwisesum(arr,row,col);
    columnwisesum(arr,row,col);
    return 0;
}

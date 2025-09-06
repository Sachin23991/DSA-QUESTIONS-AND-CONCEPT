#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int st, int mid, int end) {
    vector<int> v;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            v.push_back(arr[i++]);
        } else {
            v.push_back(arr[j++]);
        }
    }

    while (i <= mid) v.push_back(arr[i++]);
    while (j <= end) v.push_back(arr[j++]);

    for (int i = 0; i < v.size(); i++) {
        arr[st + i] = v[i];
    }
}

void mergesort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;

        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


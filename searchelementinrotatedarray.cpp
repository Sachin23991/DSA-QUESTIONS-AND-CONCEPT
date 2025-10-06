#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:


    int getpivot(vector<int> arr) {
    /*int start = 0;
    int end = arr.size() - 1;

    // Case 1: Already sorted
    if (arr[start] <= arr[end]) {
        return start;
    }

    // Binary search for pivot
    while (start < end) {
        int mid = start + (end - start) / 2;

        // If mid element >= first element, pivot is in right half
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        // Otherwise, pivot is in left half
        else {
            end = mid; // NOT mid-1 because pivot could be at mid
        }
    }

    // start == end ? pivot index
    return start;*/
    return min_element(arr.begin(), arr.end()) - arr.begin(); 
}

int binarysearch(vector<int> &arr , int start , int end, int k){
    int mid = start+((end - start)/2);

    while(start <= end){
        if(arr[mid] == k){
            return mid;
        }else if(arr[mid]>k){
            end = mid-1;
        }else{
            start = mid+1;
        }
    mid = start+((end - start)/2);

    }

    return -1;
}
    int search(vector<int>& arr, int k) {
        int n = arr.size();
         int pivot = getpivot(arr);

    // If k is in the right sorted half
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarysearch(arr, pivot, n - 1, k);
    }
    // Otherwise in the left sorted half
    else {
        return binarysearch(arr, 0, pivot - 1, k);
    }
    }
};

int main() {
    Solution sol;
    vector<int> arr;
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements (rotated sorted array): ";
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> k;

    int index = sol.search(arr, k);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in array." << endl;
    }

    return 0;
}
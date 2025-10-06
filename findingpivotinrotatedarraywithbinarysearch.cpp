#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findpivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;

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

    // start == end → pivot index
    return start;
}

int main(){
    
    int n;
    cout<<"Enter the size of rotated array: ";
    cin >> n;
    // the thing is we have to first rotate the array butthis time we are finding the pivot
    // so we are just focusing on finding the pivot thats why i am just taking the initially rotated sorted array
    int arr[n];
    for(int i = 0;i< n;i++){
        cin>>arr[i];
    }
    cout<<"The index of the pivot is: "<<findpivot(arr,n);
}
/* In pivot we will find the smallest elementy index we can use inbuilt function for that 

if we have to find the smallest element then

int min = *min_element(arr.begin(),arr.end())
int max = *max_element(arr.begin(),arr.end())

min element index 

int minindex = *min_element(arr.begin(),arr.end()-arr.begin())*/
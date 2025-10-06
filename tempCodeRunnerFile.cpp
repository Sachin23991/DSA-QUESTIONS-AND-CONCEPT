#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int target){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;
    int ans = -1;// we are taking this to store the occurenc because the number coulld be found
    // at mid and in the left part of mid so we store the mid and we are finding the first occurence 
    // so we go in the eft section so for that we set the end to mid -1 if we found the number than
    // that index is the first occurenece otherwise the mid will be the first occurence thats why we are storing the number

    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;

    
        }else if( target > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start + (end- start)/2;
    }
    return ans;
}


int lastoccurence(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            ans = mid;       // store the index
            start = mid + 1; // search right side for later occurrence
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the siz of an array: ";
    cin >> n;
    int arr[n];
    for(int i = 0;i< n;i++){
        cin >> arr[i];
    }

    int num;
    cout<<"Enter the number whose first and last occurene you want to see: ";
    cin >> num;

    cout<<"First occurence at index: "<<firstoccurence(arr,n,num)<<endl;
    cout<<"Last occurence at index: "<<lastoccurence(arr,n,num);
}
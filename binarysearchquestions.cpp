#include<iostream>
using namespace std;

int  BinarySearch(int arr[] , int n , int num){

    int start = 0;
    int end = n - 1;
    int mid = start + ((end - start)/2);

        while(start <= end){
    if(num == arr[mid] ){
       return mid;
    }else if(num < arr[mid]){
        end = mid - 1;
    }else{
        start = mid + 1;
    }
    mid = start + ((end-start)/2);
}
    return -1;

}
int main(){
    int n ;
    cout<<"Enter the size of an array: ";
    cin >> n;

    int arr[n];
    for(int i = 0;i< n;i++){
        cin>> arr[i];
    }
    int num;
    cout<<"Enter the number ou want to find wether it exist or not in array: ";
    cin >> num;
    int result = BinarySearch(arr , n , num);

    if(result >= 0){
        cout<<"Number found at the index:"<<result;
    }else{
        cout<<"Number is not present in the array";
    }
} 
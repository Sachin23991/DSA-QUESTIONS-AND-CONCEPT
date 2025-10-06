#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Printing the original array: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int temp;
    if(n%2 == 0){
    for(int i  = 0;i<n ;i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}else{
    for(int i  = 0;i<n-1 ;i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

    cout<<"Printing after swapping alternate numbers from  array: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element you want to search in the array: ";
    cin>>element;

    for(int i = 0;i<n;i++){
        if(arr[i] == element){
            cout<<i;
            break;
        }
    }
}
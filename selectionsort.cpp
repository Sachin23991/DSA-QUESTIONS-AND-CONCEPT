#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionsort(int n, vector<int> & arr){
    for(int i = 0;i<n;i++){
        // in selection sorting we select the minimum index rather than the element 
        int minindex = i;
        for(int j = i + 1 ;j < n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        if(minindex != i){
        swap(arr[i],arr[minindex]);
    }
    }
    
    cout<<"Printing the sorted array or vector: ";
    for(auto x : arr){
        cout<<x<<" ";
    }

}
int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>v(n);

    for(int i = 0;i<n ;i++){
        cin>>v[i];
    }

    cout<<"Printing the unsorted vector or array: "<<endl;
    for(auto x : v){
        cout<<x<<" ";
    }

    selectionsort(n,v);

}
// Time Complexity = O(n²)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0;i<n ;i++){
        cin >> arr[i];
    }
    cout<<"Here the unsorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;

    int temp;
    for(int i = 0;i<n;i++){
        for(int j = i+1 ;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; // these 3 lines swaps the two element
            }
        }
    }

    cout<<"Wr are printing the sorted array by bubble short "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}*/
//  the time complexity of Bubble Sort is O(n²)
// Now we are going to do sorting with the help of vector
int main(){
    int n;
    cout<<"Enter the size of the vector: ";
    cin >> n;
    vector <int> v(n);

    for(int i = 0;i<n ;i++){
        cin >> v[i];
    }
    // by this line we could sort any vector 
    sort(v.begin(),v.end());

    for(auto x: v){
        cout<<x<<" ";
    }
}

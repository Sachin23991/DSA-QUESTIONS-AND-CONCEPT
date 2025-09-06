#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// here we pass vector by pass by refrence (&) it means when we pass vector if we make change in the orignal 
// vector then the change will be made in the passed value 
void insertionsort(int n, vector<int> &arr){
    for(int i = 1;i<n;i++){// iteration from index 1 to n
        int key = arr[i]; // we set the key to arr[i]
        int j = i-1;
         // shift elements that are greater than key to one position right
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j]; // move element to one position right
            j--;

        }

        arr[j+1] = key;  // insert the key in correct position
    }


}
int main(){
    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin >> n;

    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    insertionsort(n,v);

    // Sorted Vector

    for(auto x : v){
        cout<<x<<" ";
    }

}

// best case O(n)

// Worst case O(n²)
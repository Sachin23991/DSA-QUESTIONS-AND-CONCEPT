#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/* this code will be used when there is one unique element
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ;i++){

        cin >> arr[i];
    }
    int result = 0;


    for(int i = 0 ; i< n ;i++){
        result  ^= arr[i];
    }

    cout << "unique element in the array is: "<<result;
}*/





/*it is correct but not efficient
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ;i++){

        cin >> arr[i];
    }

    vector<int> v;

    for(int i = 0 ;i< n ; i++){
        int count = 0;
        for(int j = 0 ; j< n ; j++){
            if((arr[i] == arr[j])&& i != j){
                count ++ ;
                break;

            }

        }
        if(count == 0){
            v.push_back(arr[i]);
            
        }
    }

    cout<<"Elements which are unique in the array: ";
    for(int i = 0 ; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
    */

    int main(){

         int n;
    cout<<"Enter the size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ;i++){

        cin >> arr[i];
    }

    unordered_map<int, int> freq;
     // Count frequency of each element
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
        cout << "Unique elements are: ";
    for(auto it : freq) {
        if(it.second == 1) {
            cout << it.first << " ";
        }
    }

    
    }


//Binary search only apply on sorted array
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    //Our loop works until the starting index is smaller than ending index for that we will use the while loop
    int mid = (start + end)/ 2;
    // for optimisation we can use 
    //int mid = start + (end - start)/2 ;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key >  arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = (start + end)/2;// new updated middle of the part array 
        
    }
    return -1;

}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;
int arr[size];
    for(int i =0;i<size;i++){
        cin >> arr[i];
    }
    int key;
    cout<<"Enter the key that you want to find inside the array: ";
    cin >> key;
    int index = BinarySearch(arr,size,key);
    cout<<"Index of the key into the array is: "<<index<<endl;
}

// Complexity of BinarySearch is O(log n) where n is the size of the array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for(int i = 0;i<size;i++){
        
        cin >> arr[i];
    }

    cout<<"\n Printing the initial array : ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // We are adding the element by index if we enter in position as 2 means the element added at the second index
    int ele;
    cout<<"Enter the element that you want to add into the array: ";
    cin >> ele;

    // as we going to add the element so we increase the size by 1
    size++;

    int pos;
    cout<<"Enter the poisition at which you want to enter the element: ";
    cin >> pos;

    for(int i = size-1; i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;
    cout<<"Printing the array after the updation: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    // We are done by adding now we are going to delete the element 

    int delpos;
    cout<<"\nEnter the position on which you want to delete the element: ";
    cin >> delpos;
    for(int i = delpos ; i<size;i++){
        arr[i] = arr[i+1];
    }

    size--;
    cout<<"Array after deleting the element from the previous array: ";
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
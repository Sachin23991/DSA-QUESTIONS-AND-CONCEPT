#include<iostream>
using namespace std;
int main(){
    int size1, size2, size3;
    cout<<"Enter the size of first and second array: ";
    cin>> size1 >>size2;

    int arr1[size1];
    for(int i =0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Printing the first array: ";
    for(int i =0;i<size1;i++){
        cout<<arr1[i]<<" ";  
    }
    cout<<endl;
    int arr2[size2];
    for(int i =0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<"Printing the second array: ";
    for(int i = 0;i<size2;i++)
    {
        cout<<arr2[i]<<" ";
    }

    size3 = size1+size2;

    int arr3[size3];
    for(int i =0;i<size1;i++){
        arr3[i] = arr1[i];
    }
    for(int i = 0;i<size2;i++){
        arr3[size1+i] = arr2[i];
    }
    cout<<"\n Printing the final array: ";
    for(int i = 0;i<size3;i++){
        cout<<arr3[i]<<" ";
    }

}
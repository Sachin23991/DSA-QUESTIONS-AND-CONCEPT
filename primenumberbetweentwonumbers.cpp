#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the two numbers between which you want to find prime numbers: ";
    int initial , final;
    cin >> initial >> final;

    for(int i = initial ; i<= final ;i++){
        int flag = 1; // it means for now number is not prime
        for(int j = 2 ; j<=(i/2) ; j++){
            if( i % j == 0){
                flag = 0;
                break;
                
            }
        }
        if(flag == 1){
            cout<<i<<" ";
        }
    }
}

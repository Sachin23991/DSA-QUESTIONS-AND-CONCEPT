#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"Enter the numer that you want to check wether it is prime or not: ";
    cin>>n;

    if(n == 0 || n == 1){
        cout<<"Not a Prime Number";
    }else{
        bool flag = true;
        for(int i = 2;i<n;i++){
            
            if(n % i == 0){
                flag = false;
                break;
            }

            
        }
        if(flag){
                cout<<n<<" is a Prime Number";
                
            }else{
                cout<<n<<" is not a Prime Number";
                
            }
    }
}
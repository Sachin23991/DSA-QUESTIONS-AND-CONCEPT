#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin >> n;

    string binary = " ";

    while(n>0){
        int rem = n % 2;
        binary = to_string(rem)+binary;
        n = n/2;
    }
    cout<<"the binary form of the number is: "<<binary;
}
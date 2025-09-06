#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number whose digit count you want :- ";
    int num;
    cin >> num;
    int num1 = num;
    int count = 0;
    while(num>0){
        count++;
        num /= 10;
    }
    cout<<"The total number of digits are:-- "<<count<<endl;

    // now we will do the logic for reverse number instead of counting the digits
    int reverse = 0;
    while(num1 > 0){
        int rem = num1%10;
        reverse = reverse * 10 + rem ;
        num1 /= 10;

    }
    cout<<"Reversed Number: "<<reverse<<endl;
}

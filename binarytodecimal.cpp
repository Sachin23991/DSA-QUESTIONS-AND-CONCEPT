#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the binary number: ";
    cin >> n;

    int decimal = 0;

    int count = 0;
    while(n>0){
        int rem = n % 10;
        decimal = decimal + pow(2,count)*rem;
        count++;
        n = n/10;
    }
    cout<<"The decimal number of the bianry is: "<<decimal;
}

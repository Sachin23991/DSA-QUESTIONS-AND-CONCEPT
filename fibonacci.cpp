// // first we find the fibonaci number at the nth place and after that fibonacci number upto nth place

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the position of the fibonacci number: ";
//     cin >> n;
//     int a = 1, b = 1, sum = 0;
//     for(int i = 3;i<=n;i++){
//         sum = a+b;
//         a = b;
//         b = sum;
//     }
//     cout<<sum;
//     // as we already consider the two terms first and second which are 1 and 1 then we start from 3
//     // now we get our answer

// }




// this is also giving us the nth fibonacci number but with recurssion
#include<iostream>
using namespace std;
int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cin>>n;
    int sum = fib(n);
    cout<<sum;
}
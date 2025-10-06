#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number upto you want to find the prime numbers: ";
    cin >> n;
    if( n == 0 || n== 1){
        cout<<"No prime Numbers";
    }
    else{
    for(int i =2;i<=n;i++){
        bool flag = true;
        for(int j = 2 ;j < i;j++){// for optimization we will use for(int j = 0;j<=sqrt(i);j++)
            if(i %j == 0){
                flag = false;
                break;
            }
        }
        if(flag==true){
            cout<<i<<" ";
        }
    }
}
}
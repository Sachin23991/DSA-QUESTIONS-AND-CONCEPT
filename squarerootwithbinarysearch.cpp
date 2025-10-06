#include<iostream>
using namespace std;

int sqrtBinarySearch(int x){
    if( x == 0 || x == 1){
        return x;
    }

    int start = 0;
    int end = x;
    int ans = 0;
    while(start<=end){
    int mid = start+((end - start)/2);

    if(mid <= x/mid){
        ans = mid;
        start = mid+1;
    }else{
        end = mid-1 ;
    }
    

    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    int result = sqrtBinarySearch(n);
    cout<<"The square root of the number you entered is: "<<result;
}

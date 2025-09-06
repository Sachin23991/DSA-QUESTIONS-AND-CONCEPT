#include<iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter the upper limit: ";
    cin >> limit;

    int a = 0, b = 1;

    while(a <= limit){
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

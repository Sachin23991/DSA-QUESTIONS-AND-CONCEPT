#include<iostream>
using namespace std;
int main(){
    string str = "Hello World";

    string newstr;
    getline(cin,newstr);

    str =  newstr;
    cout<<str;
}
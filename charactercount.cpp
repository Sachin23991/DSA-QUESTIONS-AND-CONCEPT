#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int countchar(string str, char c){
    unordered_map<char,int> freq;

    int n = str.size();

    for(int i = 0;i<n;i++){
        freq[str[i]]++;
    }

    return freq[c];
}
int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    char ch;
    cin>>ch;

    int count = countchar(str,ch);
    cout<<"The count of char from the string: "<<count;
}
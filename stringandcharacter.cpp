#include<iostream>
using namespace std;
bool palindrome(char ch[],int n){
    int i = 0;
    int e = n-1;

    while(i<e){
        if(ch[i]!=ch[e]){
            return false;
        }else{
            i++;
            e--;
        }
    }
    return true;
}
void reversecharacterstring(char ch[],int n){
    int i = 0;
    int e = n-1;
    while(i<e){
        char temp = ch[i];
        ch[i] = ch[e];
        ch[e] = temp;
        i++;
        e--;
    }

    cout<<"Reverse of the character array is: "<<ch;


}
int getchararraylength(char ch[]){
    int count = 0;
    int i = 0;

    while(ch[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main(){

    char ch[10];

    cout<<"Enter your name: ";
    cin>>ch;

    cout<<"Your name is: "<<ch<<endl;
    // as we are using character array with the help of cin if there is space , tab or null character in 
    // between it will take only the characters before that null or space character

    int n = getchararraylength(ch);
    cout<<"Length of the char array: "<<n<<endl;

    reversecharacterstring(ch,n);
    cout<<endl;
    if(palindrome(ch,n)){
        cout<<"Text you entered is palindrome";
    }else{
        cout<<"Not a palindrome";
    }



}
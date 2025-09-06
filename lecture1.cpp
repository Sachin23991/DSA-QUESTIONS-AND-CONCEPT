#include<iostream>
using namespace std;
int main(){
  /* int p = 5;
   int q = 10;
   int num1 = p+=q-=p;
    cout<<num1<<" "<<q;*/

    /*Until now we are only learning how we taking the input how we print the output and about operators all are 
    basic things that we already known now we going to do some question of if else switch and on ternirary operator*/

    // we will make a celender of days by using switch 
    // By Switch

    /*
    int day;
    cout<<"Enter the number of day that you want to print: ";
    cin >>day;

    switch(day){
        case 1:
        cout<<"Sunday";
        break;

        case 2:
        cout<<"Monday";
        break;

        case 3:
        cout<<"Tuesday";
        break;

        case 4:
        cout<<"Wednesday";
        break;

        case 5:
        cout<<"Thrusday";
        break;

        case 6:
        cout<<"Friday";
        break;

        case 7:
        cout<<"Saturday";
        break;

        default:
        cout<<"The number should be in rage (1,7)";
        break;
        return 0;
}
*/
        // Now we do the question on if ,else if and else
        /*int marks;
        cout<<"Enter the marks you get in the exam and i will tell you wether you are pass or not :--";
        cin >> marks;
        if(marks >= 33){
            cout<<"Pass";
        }else{
            cout<<"Fail";
        }*/

        // Now we will tell that what grade you get 
        /*cout<<"Enter the marks: ";
        int marks;
        cin >> marks;
        cout<<"Your Grade: ";
        if(marks > 90){
            cout <<"O";
        }else if(marks > 80 && marks<90){
            cout <<"A+";
        }else if(marks > 70 && marks<80){
            cout<<"A";
        }else if(marks > 60 && marks<70){
            cout<<"B";
        }else if(marks > 50 && marks<60){
            cout<<"C";
        }else if(marks > 30 && marks<40){
            cout<<"D";
        }else{
            cout<<"Failing Grade: F";
        }*/
    // ternirary operator
    // through ternirary operator we find that wether a specific number is odd or even

    int num;
    cout<<"Enter the number you want to check:- ";
    cin>>num;

    num%2 == 0 ? cout<<"Your number is even" : cout<<"Your number is odd";

}









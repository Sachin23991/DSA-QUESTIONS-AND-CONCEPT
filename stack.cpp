// In stack the operation that is performing that is LIFO
// First we are going to use stack with the help of STL
/*#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;
    // first we are going to push any one element means we are going to add one element into the stack
    s.push(1);

    // we can see the element at top  by peek or by using top function
    cout<<s.top()<<endl;

    // By pop we will delete the top element
    s.pop();
    // as  we deleted the element we can check wether it is empty or not

    cout<<s.empty()<<endl;// it returns 1 and 1 is for true


    // we can push element into stack with the help of loop and we can or print the element with the help of top and pop

    int n;
    cout<<"Enter the number of digits that you want to enter into the stack: ";
    cin>>n;

    for(int i = 0 ;i<n;i++){
        int data;
        cin>>data;
        s.push(data);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}*/

#include<iostream>
#include<stack>// For STL
using namespace std;

class Stack{
    //  we are declaring a pointer to an integer array, not the array itself.
    //Because we want our stack to be: Dynamic (resizable or set at runtime)

    public:
    int * arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        // now we decide the size of array
        arr = new int[size];

        top = -1;

    }
    void push(int element){
        if(top == size-1){
            cout<<"Stack Overflow"<<endl;
            return ;
        }
        top++;
        arr[top] = element;

    }
    

    void pop(){
        if(top < 0){
            cout<<"There is nothing to pop stack is empty"<<endl;
            return ;
        }
        top--;

    }
    int peek(){
        // we are taking int beacuse first it is a return type secind we take array of int data type
        if(top >= 0 && top<size){
            return arr[top];
        }else{
            cout<<"There is nothing to peek"<<endl;
            return 0;
        }
        
    }
    bool isempty(){
        if(top<0){
            return true;
        }else{
            return false;
        }
    }
    void display(){
        for(int i =0;i<= top;i++){
            cout<<arr[i]<<" ";
        }
    }

};
int main(){
    Stack st(5);
     st.push(10);
    st.push(20);
    st.push(30);

    st.display();             // Output: 10 20 30
    cout << "Top: " << st.peek() << endl;

    st.pop();
    st.display();             // Output: 10 20

    cout << "Is empty? " << (st.isempty() ? "Yes" : "No") << endl;

    return 0;


}
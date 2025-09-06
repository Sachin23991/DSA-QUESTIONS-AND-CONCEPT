// we are going to implement deque with the help of doublylinked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node* prev;

    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class Dequeue{
    public:
    Node * front;
    Node * rear;
    Dequeue(){
        front = rear = NULL;
    }

    void push_front(int data){
        if(front == NULL){
            front = rear = new Node(data);
            return ;
        }else{
            Node * temp = new Node(data);
            temp->next = front;
            front->prev = temp;
            front = temp;
            return ;
        }
    }
    void push_back(int data){
        if(front == NULL ){
            front = rear = new Node(data);
            return ;
        }
        else{
            Node * temp = new Node(data);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return ;
        }
    }
    void pop_front(){
        if(front == NULL){
            cout<<"There is nothing to delete"<<endl;
            return ;
        }else if(front == rear){
            Node * temp = front;
            delete(temp);
            front = rear = NULL;
            return ;

        }else{
            Node * temp = front;
            front = front->next;
             front->prev = NULL;
            delete(temp);
           
        }
    }
    void pop_back(){
         if(front == NULL){
            cout<<"There is nothing to delete"<<endl;
            return ;
        }else if(front == rear){
            Node * temp = front;
            delete(temp);
            front = rear = NULL;
            return ;

        }else{
            Node * temp = rear;
            rear = rear->prev;
            rear->next = NULL;
            delete(temp);
            
            return ;
        }
        
    }
    void get_front(){
        if(front){
            cout<<front->data;
        }

    }
    void get_rear(){
        if(rear){
            cout<<rear->data;
        }

    }
    bool empty(){
        if(front == NULL && rear == NULL){
            return true;
        }else{
            return false;
        }
    }
    void display(){
        if (!front) {
        cout << "Deque is empty!\n";
        return;
    }
    Node* temp = front; 
    while (temp) {
        cout << temp->data << " <--> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    }
};
int main() {
    Dequeue dq;

    cout << "Pushing 10 at front...\n";
    dq.push_front(10);
    dq.display();

    cout << "Pushing 20 at front...\n";
    dq.push_front(20);
    dq.display();

    cout << "Pushing 30 at back...\n";
    dq.push_back(30);
    dq.display();

    cout << "Pushing 40 at back...\n";
    dq.push_back(40);
    dq.display();

    cout << "\nGetting front element:\n";
    dq.get_front();  // should print 20
    cout << endl;

    cout << "Getting rear element:\n";
    dq.get_rear();   // should print 40
    cout << endl;

    cout << "\nPopping front element...\n";
    dq.pop_front();  // removes 20
    dq.display();

    cout << "Popping rear element...\n";
    dq.pop_back();   // removes 40
    dq.display();

    cout << "\nGetting front element:\n";
    dq.get_front();  // should print 10
    cout << endl;

    cout << "Getting rear element:\n";
    dq.get_rear();   // should print 30
    cout << endl;

    cout << "\nChecking if deque is empty: ";
    if (dq.empty())
        cout << "Yes\n";
    else
        cout << "No\n";

    cout << "\nPopping all elements...\n";
    dq.pop_front();  // removes 10
    dq.pop_back();   // removes 30
    dq.display();

    cout << "Trying to pop from empty deque...\n";
    dq.pop_front();  // should show message
    dq.pop_back();   // should show message

    cout << "\nFinal check if deque is empty: ";
    if (dq.empty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
/*#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insert elements at front and back
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_back(25);

    // Display all elements
    cout << "Deque elements: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // Access front and back
    cout << "Front element: " << dq.front() << endl;
    cout << "Rear element: " << dq.back() << endl;

    // Pop from front and back
    dq.pop_front();
    dq.pop_back();

    // Display after pops
    cout << "After popping front and back: ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;

    // Check if deque is empty
    if (dq.empty()) {
        cout << "Deque is empty\n";
    } else {
        cout << "Deque is not empty\n";
    }

    // Get size
    cout << "Size of deque: " << dq.size() << endl;

    return 0;
}


using STL*/
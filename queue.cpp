// Queue is a data structure which follows first in first out (FIFO)
// Implementing queue with the help of STL
/*
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    // as it is queue it performs first in first out operation

    int n;
    cin>>n;

    for(int i =0;i<n;i++){
        int data;
        cin>>data;
        q.push(data);
    }
    cout<<"Size of queue: "<<q.size()<<endl;
    // as we are not implementing the code now so we dont have any idea about front and rear index
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    here we used different functions of queue 
    for example 1) push 2) pop 3) empty 4)front
}
*/
#include<iostream>
using namespace std;

class MyQueue {
public:
    int* arr;
    int front;
    int rear;
    int capacity;

    MyQueue(int size) {
        this->capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = 0;
    }

    bool empty() {
        return front == rear;
    }

    void enqueue(int data) {
        if (rear == capacity) {
            cout << "Queue is Overflowed" << endl;
            return;
        }
        arr[rear] = data;
        rear++;
    }

    void dequeue() {
        if (empty()) {
            cout << "Nothing to delete" << endl;
            return;
        }
        // Optional: set removed value to -1 (for debugging)
        arr[front] = -1;
        front++;

        // Optional: Reset when all elements are removed
        if (front == rear) {
            front = 0;
            rear = 0;
        }
    }

    int frontele() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return arr[front];
        }
    }

    int currentSize() {
        return rear - front;
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    MyQueue q(n);

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        q.enqueue(data);
    }

    q.display();
    q.dequeue();
    cout << "Front Element: " << q.frontele() << endl;
    cout << "Current Size: " << q.currentSize() << endl;

    return 0;
}



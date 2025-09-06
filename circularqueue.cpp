#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = rear = -1;
    }

    void enqueue(int data) {
        if ((front == 0 && rear == size - 1) || 
            (rear + 1) % size == front) {
            cout << "Circular Queue is Overflowed" << endl;
            return;
        }

        if (front == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = data;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Circular Queue is Underflowed" << endl;
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if (front == rear) {
            // Only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);  // Should show overflow

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);  // These should wrap around

    q.display();

    return 0;
}

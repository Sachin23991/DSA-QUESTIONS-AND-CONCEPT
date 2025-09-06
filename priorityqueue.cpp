#include<iostream>
using namespace std;

class Node {
public:
    int data;
    int priority;
    Node* next;

    Node(int d, int p) {
        data = d;
        priority = p;
        next = NULL;
    }
};

class PriorityQueue {
private:
    Node* front;

public:
    PriorityQueue() {
        front = NULL;
    }

    // Insert based on priority (higher priority first)
    void push(int d, int p) {
        Node* temp = new Node(d, p);

        if (!front || p > front->priority) {
            // Insert at beginning
            temp->next = front;
            front = temp;
        } else {
            // Traverse and find the right position
            Node* curr = front;
            while (curr->next!=NULL && curr->next->priority >= p) { 
                curr = curr->next;
            }
            temp->next = curr->next;
            curr->next = temp;
        }
    }

    // Remove element with highest priority
    void pop() {
        if (!front) {
            cout << "Priority Queue is empty!\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }

    // Get the highest priority element
    void peek() {
        if (!front) {
            cout << "Priority Queue is empty!\n";
            return;
        }
        cout << "Element with highest priority: " << front->data << " (Priority: " << front->priority << ")\n";
    }

    // Display entire queue
    void display() {
        if (!front) {
            cout << "Priority Queue is empty!\n";
            return;
        }
        Node* temp = front;
        cout << "Priority Queue contents:\n";
        while (temp) {
            cout << "[Data: " << temp->data << ", Priority: " << temp->priority << "] --> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Check if empty
    bool empty() {
        return front == NULL;
    }
};

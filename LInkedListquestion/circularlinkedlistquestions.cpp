// the condition for checking wether a list is a circular linked list
// In circular linked lis the last node will be pointed t the first node
#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

bool detectcircularlinkedlist(Node * head){
    if(head == NULL) return ;


    Node* temp = head->next;

    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;

}
bool detectloop(Node * head){
    // first we check if there
    if(head == NULL) return false;


    map<Node * , bool> visited;

    Node * temp = head;
    // we have to take temp for traversal

    while(temp != NULL){

        if(visited[temp] == true){
            return true;// means here we alredy reached and we go again that means there is a loop
        }

        visited[temp] = true;

        temp = temp->next;
     }

     return false;
     // means there is no loop in the linked list
}

// floyd cycle approach which take lower time complexity

bool detectloop(Node *head) {
    if (head == NULL || head->next == NULL) 
        return false;

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move slow by 1
        fast = fast->next->next;     // move fast by 2

        if (slow == fast) {
            return true; // loop detected
        }
    }

    return false; // no loop
}

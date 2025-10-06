/*#include<iostream>
using namespace std;
// first we do the single linked list
class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};
void insertathead(node * &head , int data){
        node * temp = head;
        node * newnode = new node(data);
        if(head == NULL){
            head = newnode;
            return ;
        }

        newnode->next = head;
        head = newnode;
}
void insertatend(node *&head , int data){
    node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    node *newnode = new node(data);
    temp->next = newnode;
}
void insertatpoisition(node * &head , int data,int pos){

        node * temp = head;
        node * newnode = new node(data);
        int count  = 1;
        while(temp->next != NULL && count<pos){
            temp = temp->next;
            count++;
        }

        newnode->next = temp->next;
        temp->next = newnode;
}
void deleteathead(node *&head){
    if(head == NULL){
        cout<<"There is nothing to delete"<<endl;
        return ;
    }
    node * temp = head;
    head = head->next;
    delete temp;
}
void deleteatend(node *&head){
    if(head ==  NULL){
        cout<<"There is nothing to delete"<<endl;
    }
    node * temp = head;
    while(temp->next->next!=NULL){
        temp =temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
void deleteatpoisition(node* &head,int pos){
    if(head ==  NULL){
        cout<<"There is nothing to delete"<<endl;
    }
    node * temp = head;
    int count = 1;
    while(temp->next!= NULL && count <pos){
        temp = temp->next;
        count++;
    }

    node * delnode = temp->next;
    temp->next = temp->next->next;

    delete delnode;

}
void print(node * head){
    while(head!=NULL){
        cout<<head->data<<"--->";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    node *head =  NULL;

    
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,4);
    insertathead(head,5);
    insertathead(head,6);
    insertathead(head,7);
    print(head);
    insertatend(head,8);
    insertatend(head,9);
    print(head);
    insertatpoisition(head,10,3);

    print(head);
    deleteathead(head);
     print(head);
     deleteatend(head);
     print(head);
    deleteatpoisition(head,3);
    print(head);
}

// Now we are going to writer the code for doubly linked list
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertathead(node*& head, int data) {
    node* newnode = new node(data);
    if (head == NULL) {
        head = newnode;
    } else {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void insertatend(node*& head, int data) {
    if (head == NULL) {
        head = new node(data);
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    node* newnode = new node(data);
    temp->next = newnode;
    newnode->prev = temp;
}

void insertatposition(node*& head, int data, int pos) {
    if (pos == 1) {
        insertathead(head, data);
        return;
    }
    node* temp = head;
    int count = 0;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) return;

    node* newnode = new node(data);
    newnode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = newnode;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void deleteathead(node*& head) {
    if (head == NULL) {
        cout << "There is nothing to delete" << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    delete temp;
}

void deleteatend(node*& head) {
    if (head == NULL) {
        cout << "There is nothing to delete" << endl;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->prev != NULL) temp->prev->next = NULL;
    else head = NULL;
    delete temp;
}

void deleteatposition(node*& head, int pos) {
    if (head == NULL) return;
    if (pos == 1) {
        deleteathead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while (temp != NULL && count < pos) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) return;
    if (temp->next != NULL) temp->next->prev = temp->prev;
    if (temp->prev != NULL) temp->prev->next = temp->next;
    delete temp;
}

void print(node* head) {
    while (head != NULL) {
        cout << head->data << "--->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;

    insertathead(head, 1);
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 4);
    insertathead(head, 5);
    print(head);

    insertatend(head, 8);
    insertatend(head, 9);
    print(head);

    insertatposition(head, 10, 3);
    print(head);

    deleteathead(head);
    print(head);

    deleteatend(head);
    print(head);

    deleteatposition(head, 3);
    print(head);
}
*/
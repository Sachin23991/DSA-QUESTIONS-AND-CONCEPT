#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void Insertathead(Node *&head, int data){
    Node * temp = new Node(data);
    temp->next = head;
    if(head!=NULL){
    head->prev = temp;
    }
    head = temp;
}
void Insertatend(Node * &head , int data){

    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    Node * newnode = new Node(data);

    temp->next = newnode;
    newnode->prev = temp;
    
}
void Insertatposition(Node * & head, int data , int pos){
    if(pos == 1){
        Insertathead(head , data);
        return ;
    }

    Node * temp = head;
    int sum = 1;
    while(temp != NULL && sum < pos-1){
        temp = temp->next;
        sum++;
    }
    Node * newnode = new Node(data);

    newnode->next =temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    if(newnode->next != NULL){
    temp->next->next->prev = newnode;
    }
}
void deleteathead(Node * & head){
    if(head == NULL){
        cout<<"There is nothing to delete"<<endl;
        return ;
    }
    Node * temp = head;
    head = head->next;
    free(temp);
}
void deleteatend(Node * &head){
    if(head == NULL){
       cout<<"There is nothing to delete"<<endl;
        return ; 
    }

    Node * temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node * delele = temp->next;
    temp->next = NULL;
    free(delele);

}
void deleteatposition(Node*& head, int pos) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    if (pos == 1) {
        deleteathead(head);  // assumes deleteathead is already defined
        return;
    }

    int count = 1;
    Node* temp = head;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }

    Node* delele = temp->next;

    temp->next = delele->next;
    if (delele->next != NULL) {
        delele->next->prev = temp;
    }

    delete delele;
}

void printdoublelinkedlist(Node *& head){
    if(head == NULL){
        cout<<"There is nothing to print";
    }
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<"--->";
        temp = temp->next;
    }
}
int main(){
        int n;
        cout<<"Enter the number of digits you want to insert into double linked list: ";
        cin >> n;

        Node * head = NULL;
        for(int i = 0;i<n;i++){
            int data;
            cin >> data;
            Insertathead(head , data);
        }

        printdoublelinkedlist(head);
        cout<<endl;
        Insertatend(head,99);
        printdoublelinkedlist(head);
        cout<<endl;
        Insertatposition(head , 98 ,3);
        printdoublelinkedlist(head);
        cout<<endl;
        deleteathead(head);
        printdoublelinkedlist(head);
        cout<<endl;
        deleteatend(head);
        printdoublelinkedlist(head);

}
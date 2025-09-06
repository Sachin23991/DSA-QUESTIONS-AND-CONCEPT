#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node * next;

    // Constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class circularlinkedlist{
    Node * head;
    Node * tail;
    
    public:
    circularlinkedlist(){
        head = tail = NULL;

    }

    void Insertathead(int data){
        Node * newnode = new Node(data);
        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
        }else{
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }
    void Insertatend(int data){
        Node * newnode = new Node(data);
        Node * temp = head;
        if(head == NULL){
            head = tail = newnode;
            tail->next = head;
        }else{

            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }
    void Insertatpoisition(int pos , int data){

        Node * newnode = new Node(data);

        if(pos == 1){
            Insertathead(data);
            return ;
        }
        int sum = 1;
        Node * temp = head;
        while(temp != tail && sum <pos -1 ){
            temp = temp->next;
            sum++;
        }
        newnode->next = temp->next;
        temp->next = newnode;

    }
    void deleteatstart(){
        if(head == NULL){
            cout<<"There is nothing to delete";
            return ;
        }
        if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }
        Node * temp = head;
        head = temp->next;// new head is temp->next
        tail->next = head;
        free(temp);
    }
    void deleteatend(){
        if(head == NULL){
            cout<<"There is nothing to delete";
            return ;
        }
        if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }
        Node *temp = head;
        while(temp->next != tail){
            temp = temp->next;

        }
        Node * delele = temp->next;
        temp->next = head;
        tail = temp;
        free(delele);
    }
    void deleteatposition(int pos){
        if(pos == 1){
            deleteatstart();
            return ;
        }
        int sum = 1;
        Node* temp = head;
        while(temp != tail && sum <pos-1){
            temp = temp->next;
            sum ++;
        }
        Node * delele = temp->next;
        temp->next = temp->next->next;
        delete(delele);
    }
    void printlist(){
        if (!head) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    
    }

};
int main(){
    circularlinkedlist cll;
    int n;
    cout<<"Enter the no of digits: ";
    cin >> n;
    for(int i =0;i<n;i++){
        int data;
        cin>>data;

        cll.Insertathead(data);
    }

    cll.printlist();
    cll.Insertatend(90);
    cout<<endl;
    cll.printlist();
    cll.Insertatpoisition(3,80);
    cout<<endl;
    cll.printlist();
    cll.deleteatstart();
    cout<<endl;
    cll.printlist();
    cll.deleteatend();
    cout<<endl;
    cll.printlist();
    cll.deleteatposition(3);
    cout<<endl;
    cll.printlist();

}
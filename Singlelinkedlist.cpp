#include<iostream>
using namespace std;
// As we know linked list is consist of nodes
class Node{
    public:
    int data;
    Node * next;
// we make a constructor because we have to insert data into node

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void Insertathead(Node * &head, int data)// we take NOde* & head we take & because we dont want to create the copy
{
    Node * temp = new Node(data);
    temp->next = head;// means we put the privious head in the temp variable 
    head = temp;// now we are making the temp node as the head node
}
void Insertatend(Node * &head,int data){
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node * newnode = new Node(data);
    temp->next = newnode;
}
void Insertatposition(Node * &head , int data , int pos){
    Node * temp = head;
    if (temp == NULL) {
    cout << "Position out of range" << endl;
    return;
}
    if(pos == 1){
        Insertathead(head,data);
        }
    int sum = 1;
    while(temp != NULL && sum < pos-1){
        temp = temp->next;
        sum ++;
    }

    Node * newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
}
void deletefromhead(Node* &head ){
    if(head == NULL){
        cout<<"There is nothing to delete";
        return ;
    }
    Node * temp = head;
    head = temp->next;
    free(temp);
}
void deletefromend(Node * & head){
    if(head == NULL){
        cout<<"There is nothing to delete";
        return ;
    }

    Node * temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

}
void deleteatpoisition(Node * & head, int pos){
     Node * temp = head;
    if (temp == NULL) {
    cout << "Position out of range" << endl;
    return;
}
    if(pos == 1){
        deletefromhead(head);
    }
    int sum = 1;

    while(temp != NULL && sum < pos-1){
        temp = temp->next;
        sum++;
    }
    Node * delnode = temp->next;

    temp->next = temp->next->next;
    free(delnode);

}
void printsinglelinkedlilst(Node * &head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){
  int n;
  cout<<"Enter the no of digits you want to enter into the linked list: ";
  cin >> n;
    Node * head = NULL;
  for(int i =0;i<n;i++){
    int data;
    cin>>data;
    Insertathead(head , data);
  }

    printsinglelinkedlilst(head);
    cout<<endl;
    Insertatend(head,89);
    printsinglelinkedlilst(head);
    cout<<endl;
    Insertatposition(head,96,3);
    printsinglelinkedlilst(head);
    cout<<endl;
    deletefromhead(head);
    printsinglelinkedlilst(head);
    cout<<endl;
    deletefromend(head);
    printsinglelinkedlilst(head);
    cout<<endl;
    deleteatpoisition(head,3);
    printsinglelinkedlilst(head);




}
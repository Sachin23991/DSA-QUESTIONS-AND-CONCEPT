#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node * left;
    node * right;
    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void insertintobst(node * & root , int data){
    if(root == NULL)
    {
        root = new node(data);
        return ;
    }
    else if(data < root->data){
        insertintobst(root->left,data);
    }else{
        insertintobst(root->right,data);
    }
}
void takeinput(node * & root){
    int data;
    cin>> data;

    while(data != -1){
        insertintobst(root , data);

        cin >> data;

    }
}
void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal
void preorder(node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal
void postorder(node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
// Level Order Traversal (Line by Line)
void levelOrder(node* root) {
    if (root == NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL); // Level separator

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) q.push(NULL);
        } else {
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
}
void searchbinarytree(node* root, int data) {
    if (root == NULL) {
        cout << "Element not found in the tree." << endl;
        return;
    }

    if (root->data == data) {
        cout << "Element " << data << " found in the tree!" << endl;
        return;
    } 
    else if (data < root->data) {
        searchbinarytree(root->left, data);
    } 
    else {
        searchbinarytree(root->right, data);
    }
}
void maxofbst(node * root){
    node * temp = root;
    if(root == NULL){
        cout<<"BST is empty"<<endl;
        return ;
    }
    while(temp->right != NULL){
        temp= temp->right;
    }
    cout<<"Max of BST: "<<temp->data<<endl;

}

node *  minofbst(node * root){
    node * temp = root;
    if(root == NULL){
        cout<<"BST is empty"<<endl;
        return NULL;
    }
    while(temp->left != NULL){
        temp= temp->left;
    }
    return temp;

}

node * deletenodefrombst(node * &root , int key){

    if(root == NULL){
        cout<<"BST is empty"<<endl;
        return NULL;
    }

    // now we traverse upto the key
    if(key<root->data){
        root->left = deletenodefrombst(root->left,key);
    }else if(key > root->data){
        root->right = deletenodefrombst(root->right,key);
    }else{
        // means node identified

        // now there are three cases 

        // 1 when there is no child

        if(root->left == NULL && root->right == NULL){
            delete root ;
            return NULL;
        }
        // now if we have 1 child
        else if(root->right == NULL){
            node * temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL){
            node * temp = root->right;
            delete root;
            return temp;
        }
        // now if we have 2 child
        else{
            node*sucessor = minofbst(root->right);

            root->data = sucessor->data;// we replaced thee root data with sucessor data 

            root->right = deletenodefrombst(root->right,sucessor->data);// delete the sucessor


        }
    }
    return root;
}

int main() {
    node* root = NULL;
    cout << "Enter values for BST (end with -1): ";
    takeinput(root);

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << "\nPostorder Traversal: ";
    postorder(root);

    cout << "\nLevel Order Traversal:\n";
    levelOrder(root);

    int target;
    cout<<"Enter the data that you want to find: ";
    cin>>target;

    searchbinarytree(root,target);

    maxofbst(root);

    minofbst(root);


    int key ;
    cout<<"Enter the number or key that you want to delete: ";
    cin>>key;
    root = deletenodefrombst(root, key);

    cout << "Inorder after deleting " << key << ": ";
    inorder(root);
    cout << endl;

    return 0;
}

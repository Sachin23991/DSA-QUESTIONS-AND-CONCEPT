/*
Component	Description
Node:-	The fundamental unit of a tree. It contains data and links to other nodes.
Root Node:-	The topmost node in a tree. It has no parent. Only one root in a tree.
Leaf Node:-	A node with no children. It's at the bottom-most level of the tree.
Parent:-	A node that has one or more children.
Child:-	A node that descends from another node (its parent).
Sibling:-	Nodes that share the same parent.
Ancestor:-	Any node that lies on the path from the root to the current node.
Descendant:-	Any node that comes under the current node in the tree.
Edge:-	The link/connection between two nodes (parent to child).
Subtree:-	A smaller tree formed from any node and its descendants.
Level:-	Depth of a node from the root (root is at level 0 or 1, based on convention).
Height of Tree:-	Length of the longest path from root to any leaf node.
Depth of Node:-	Distance from the root to that node.
Degree:-	Number of children a node has.

📘 Simple Example
Let’s take this simple tree:

mathematica
Copy
Edit
        A
      / | \
     B  C  D
    / \    |
   E   F   G
Root Node: A

Leaf Nodes: E, F, C, G

Parent of B: A

Children of A: B, C, D

Siblings of B: C, D

Ancestors of G: D → A

Descendants of B: E, F

Level of G: 2 (if A is level 0)

Degree of A: 3

🔍 Why does it return a pointer (node*) and not the node?
Because in a tree structure:

Nodes are dynamically created using new (i.e., on the heap).

We need to link nodes together (parent to child) using their addresses.

Returning just the node would return a copy, and the connection between nodes would be lost.

while making tree we write the function which is node * buildtree( ) in this function we return the pointer to the node
instead of node because when we taking just node as return type it just send the copy not real node
due to which we can lost connection between nodes so whilie building the trees we will always goinng to use node * 
as return type
*/

/*

              1        
        3         5
      7   11   17    NULL   
      
      we are going to make tree exactly like this for tree first we need the root node
      for node we have  to create the node class and in this we have to pointers one is left and another one is right
      
*/

#include<iostream>
using namespace std;

class Node{
   public:
  int data;
  Node * left;
  Node * right;
 

    Node(int data){
      this->data = data;
      this->left = NULL;
      this->right = NULL;
    }


};

Node * buildtree(Node * root){
  // for Node * i gave the explanation upper why we are using Node * 

  // first i have to make a root node
  int data;
  cout<<"Enter the data: ";
  cin>>data;

  root = new Node(data);

  if(data == -1){
    return NULL;
  }
  // now we are going to insert node at the left or right position first in left
  cout<<"Enter the data that you want to insert in left poisition of "<<data<<endl;
  root->left = buildtree(root->left);
  cout<<"Enter the data that you want to insert in right poisition of "<<data<<endl;
  root->right = buildtree(root->right);

  return root;



}
// there are two ways by whcich we  can traverse into a tree
// BFS and DFS breadth first search and depth first seach (bfs means level order traversal)
// for dfs there are three traversal iorder , preorder , pastorder traversal

// inorder (left , node , right)
// preorder(node,left,right)
// postorder(left , right , node)

void inorder(Node * root){
    if(root == NULL) return ;

    inorder(root->left);
    cout<<root->data<<"-->";
    inorder(root->right);
}
void preorder(Node * root){
  if(root == NULL) return;
  cout<<root->data<<"-->";
  preorder(root->left);
  preorder(root->right);
}
void postorder(Node * root){
  if(root == NULL) return ;
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<"-->";
}
int main(){
  Node * root = NULL;

  root = buildtree(root);
  inorder(root);
  cout<<endl;
  preorder(root);
  cout<<endl;
  postorder(root);

}
#include <iostream>
using namespace std;

struct Node {
  int key;
  struct Node *left;
  struct Node *right;
  Node(int k){
    key = k;
    left=right=NULL;
  }
};

//Inorder traversal(Left -> Root -> Right)
void inOrder(Node *root){
  if(root!=NULL){
    inOrder(root->left);
    cout<<root->key<<"->";
    inOrder(root->right);
  }
}

//Preorder traversal
void preOrder(Node *root){
  if(root!=NULL){
    cout<<(root->key)<<" ";
    preOrder(root->left);
    preOrder(root->right);
  }
};

//PostOrder traversal
void postOrder(Node *root){
  if(root!=NULL){
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->key<<" ";
  }
}

int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(20);
  root->right = new Node (30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);

  inOrder(root);
  cout<<endl;
  preOrder(root);
}
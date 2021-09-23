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

// int height(Node *root){
//   if (root->key == NULL){
//     return 0;
//   } else {
//     return (max(height(root->left), height(root->right))+1);
//   }
// }

int sizeTree(Node *root){
  if(root == NULL) return 0;
  else{
    return 1+
    sizeTree(root->right)+
    sizeTree(root->left);
  }
}

int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(20);
  root->right = new Node (30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);

  Node *root2 = new Node(1);

  cout<<sizeTree(root)<<endl;
  cout<<sizeTree(root2)<<endl;
}

// Notes
// Node is itself behaves as user defined data type which is collection of 
// different pre-defined data types.
// Key is defined as integer data type so cant define node with value NULL
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

int height(Node *root){
  if(root==NULL){
    return 0;
  } else {
    return(1+max(height(root->left), height(root->right)));
  }
}


int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(20);
  root->right = new Node (30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);

  cout<<height(root);
}

//Notes
//We are adding 1 in every reursive call hence it return height of tree sine number of calls wil be equal to height
//in return we are returning max of two here both recursive call will be executed 
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


int getMax(Node *root){
  if(root == NULL) return 0;
  else {
    return (max(root->key, max(getMax(root->left), getMax(root->right))));
  }
}

int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(90);
  root->right = new Node (30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);

  Node *root2 = new Node(1);

  cout<<getMax(root)<<endl;
  cout<<getMax(root2)<<endl;
}

// Notes
// max compares two values at a time, to compare more than two values use max inside max function.
//we compare left and right then max of both with root->key
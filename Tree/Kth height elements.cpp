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

void kthelement(Node *root, int k){
  if(root==NULL) return;
  if(k == 0){
    cout<<root->key<<" ";
  } else{
    kthelement(root->left, k-1);
    kthelement(root->right, k-1);
  }
}


int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(20);
  root->right = new Node (30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);

  kthelement(root, 2);
}

//Notes
//Time: O(n), space: O(n)
//If k>height of tree for taht root==NULL condition
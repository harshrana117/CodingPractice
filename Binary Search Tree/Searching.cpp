#include <iostream>
#include <bits/stdc++.h>
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

//Searching in BST

bool search(Node *root, int key){
  if(root==NULL) return false;
  else if(root->key==key) return true;
  else if(root->key>key){
     return search(root->left, key);
    } 
  else{
     return search(root->right, key);
    }
}

int main(){
  //Tree declaration
  Node *root=new Node(30);
  root->left = new Node(15);
  root->right = new Node (45);
  root->right->left = new Node(35);
  root->right->right = new Node(60);

  Node *root2 = new Node(1);
  cout<<search(root, 45);
};

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

//Complete binarry tree defination:
// Tree is full until second last height(row)
//last may or may not be, if not then elements
//should be from left to right, no gaps allowed
//example
//                  10
//                 /  \
//               20    30
//              /  \  /  
//             40  50 60

int countNodes(Node *root){
  int lh=0, rh=0;
  Node *curr=root;
  while(curr!=NULL){
    lh++;
    curr=curr->left;
  }
  curr=root;
  while(curr!=NULL){
    rh++;
    curr=curr->right;
  }
  if(lh==rh){
    return pow(2,lh)-1;
  }else{
    return 1+countNodes(root->left)+countNodes(root->right);
  }

}

int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(4);
  root->right = new Node (5);
  root->right->left = new Node(3);
  root->right->right = new Node(2);

  int n1=3, n2=5;
  Node *root2 = new Node(1);
};

//Notes: 
//Time complexity O(logn*logn)

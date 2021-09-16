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

int height(Node *root){
  if(root==NULL){
    return 0;
  } else {
    return(1+max(height(root->left), height(root->right)));
  }
}

void kthelement(Node *root, int k){
  if(root == NULL) return;
  if(k == 0){
    cout<<root->key<<" ";
  } else {
    kthelement(root->left, k-1);
    kthelement(root->right, k-1);
  }
}

int printLinearRecursive(Node *root){
  int treeHeight = height(root);
  for(int i=0; i<treeHeight; i++){
    cout<<endl;
    kthelement(root, i);
  }
  return 0;
};


int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(20);
  root->right = new Node (30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);

  int treeHeight = height(root);
  for(int i=0; i<treeHeight; i++){
    cout<<endl;
    kthelement(root, i);
  }
  cout<<endl;
  printLinearRecursive(root); 
}

//Notes
//Time: Quadratic, space: quadratic
//First find height, then put it as parameter into print 
//elements of kth height, 
//using for loop print every row element.
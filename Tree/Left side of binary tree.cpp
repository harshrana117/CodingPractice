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

int maxLevel = 0;
void leftElement(Node *root, int level){
  if(root == NULL){
    return;
  }
  if(maxLevel<level){
    cout<<root->key<<" ";
    maxLevel=level;
  }
  leftElement(root->left, level+1);
  leftElement(root->right, level+1);
};

//For printing right most elements just swap the order of calling
//recursive calls first right then left

int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(90);
  root->right = new Node (30);
  root->right->left = new Node(40);
  root->right->right = new Node(50);

  Node *root2 = new Node(1);

  leftElement(root, 1);
}

//Notes: 
//First we call the recursive call with left child of the Node
//Then we call the function with right child
//if there is left child then maxLevel = level and it does not print the right element at the level
//hence it always prints left most elements of the tree

//VERY NICE QUESTION AND CREATIVITY
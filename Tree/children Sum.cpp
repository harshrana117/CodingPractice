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
void childrenSum(Node *root){

}

bool childSum(Node *root) {
  if(root == NULL) return true;
  if(root->left==NULL && root->right==NULL) return true;
  int sum =0;
  if(root->left!=NULL)sum+=root->left->key;
  if(root->right!=NULL)sum+=root->right->key;

  return(sum==root->key && childSum(root->left) && childSum(root->right));
}

int main(){
  //Tree declaration
  Node *root=new Node(10);
  root->left = new Node(5);
  root->right = new Node (5);
  root->right->left = new Node(3);
  root->right->right = new Node(2);

  Node *root2 = new Node(1);
  cout<<childSum(root);
  cout<<childSum(root2);

}

//Notes: 
//tree with only parent node will return true
//null tree will also return true
//in return we can simultaneously check for conditions and call recursive functions
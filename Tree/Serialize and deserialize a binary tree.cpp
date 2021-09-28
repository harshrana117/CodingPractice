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

//Serialize and de-serialize a binary Tree

//Serialize
int EMPTY = -1;
void Serialize(Node *root, vector<int> &arr){
  if(root==NULL){
    arr.push_back(EMPTY); 
    return;
    }
  arr.push_back(root->key);
  Serialize(root->left, arr);
  Serialize(root->right, arr);
}

//De-Serialize
Node *Deserialize(vector<int> arr, int &index){
  if(index==arr.size())
        return NULL;
    int val=arr[index];
    index++;
    if(val==EMPTY)return NULL;
    Node *root=new Node(val);
    root->left=Deserialize(arr,index);
    root->right=Deserialize(arr,index);
    return root;
}

//Inorder traversal
void inOrder(Node *root){
  if(root!=NULL){
    inOrder(root->left);
    cout<<root->key<<" ";
    inOrder(root->right);
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
  vector<int> arr;

  Serialize(root, arr);
  for (int x : arr) {
	    cout<<x<<" ";
	}

  cout<<endl;
  int index = 0;
  Node *root_new = Deserialize(arr, index);
  inOrder(root_new);
};
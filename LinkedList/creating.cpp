#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node(int x){
    data = x;
    next=NULL;
  }
};

int main() {
  Node *head=new Node(10);
  Node *temp1=new Node(20);
  Node *temp2=new Node(30);
  head->next=temp1;
  temp1->next=temp2;
  cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data<<endl;
  cout<<head->next;
  return 0;
}


// Notes in 1min:
// Struct behaves just like class objects
// line 20 prints address => in pointer it is stored address of next element 
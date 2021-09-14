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

//Iterative printing
void printList(Node *head){
  Node *curr=head;
  while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
  }
}

//Recursive printing
void rPrint(Node *head){
  if(head == NULL)
    return;
  cout<<(head->data)<<" ";
  rPrint(head->next);
}


int main() {
  Node *head=new Node(10);
  Node *temp1=new Node(20);
  Node *temp2=new Node(30);
  head->next=temp1;
  temp1->next=temp2;
  head->next->next->next=new Node(40);
  cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data<<endl;
  cout<<head->next<<endl;
  printList(head);
  cout<<endl;
  rPrint(head);
  return 0;
}

//Notes
// n function in callsatck which take O(n) space in Recursive method
//Iterative better
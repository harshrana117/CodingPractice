#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node(int x){
    data = x;
    next = NULL;
  }
};

struct myStack{
  Node *head;
  int sz;
  myStack(){
    head =NULL;
    sz=0;
  }

  void push(int x){
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
    sz++;
  }

  int pop(){
    if(head==NULL){cout<<"Stack is empty"<<endl;return INT_MAX;}
    int res = head->data;
    Node *temp = head;
    head = head->next;
    delete(temp);
    sz--;
    return res;

    //Linked list behaves like this, first head is 20
    //[20]->[10]->[5]
    //temp points to 20
    //head->next is 10,we make head to 10, then we delete 20
  }

  int peek(){
    if(head==NULL){cout<<"Stack is empty"<<endl; return INT_MAX;}
    return head->data;
  }

  int size(){
    return sz;
  }

  bool isEmpty(){
    return head==NULL;
  }
};

int main(){
  myStack s;
  s.push(5);
  s.push(10);
  s.push(20);
  cout<<s.pop()<<endl;
  cout<<s.size()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.isEmpty()<<endl;

  return 0;

}
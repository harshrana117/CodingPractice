#include <bits/stdc++.h>
#include <iostream>
using namespace std;


struct MyStack {
  int *arr;
  int cap;
  int top;
  MyStack(int c){
    cap = c;
    arr = new int[cap];
    top = -1;
  }

  void push(int x){
    if(top == cap-1){
      cout<<"Stackoverflow Condition"<<endl; return;
    }
      top++;
      arr[top] = x;
  }
  int pop(){
    if(top == -1){
      cout<<"Stack is already empty"<<endl; return INT_MIN;
    }
    int res = arr[top];
    top--;
    return res;
  }

  int peek(){
    if(top == -1){
      cout<<"Stack is already empty"<<endl;return INT_MIN;
    }
    return arr[top];
  }

  int size(){
    return (top+1);
  }

  bool isEmpty(){
    return (top == -1);
  };
};

//Vector implementation
struct MyStackVec{
  vector<int> v;
  void push(int x){
    v.push_back(x);
  }
  int pop(){
    //.back and .pop_back both functions of vector
    int res = v.back();
    v.pop_back();
    return res;
  }
  int size(){
    return v.size();
  }
  bool isEmpty(){
    return v.empty();
  }
  int peek(){
    return v.back();
  }

};


int main(){
  MyStack s(6);
  cout<<s.pop()<<endl;
  cout<<s.peek()<<endl;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(15);
  s.pop();
  cout<<s.peek()<<endl;
  cout<<s.size();
}
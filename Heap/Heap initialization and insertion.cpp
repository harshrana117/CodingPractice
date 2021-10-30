#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Heap{
  int *arr;
  int size;
  int capacity;

  public: 
  Heap(int c){
    arr=new int[c];
    size=0;
    capacity=c;
  }
  int left(int i){ return (2*i+1);}
  int right(int i){ return (2*i+2);}
  int parent(int i){ return (i-1)/2;}

  void Insert(int n){
    if(size==capacity) return;
    arr[size-1]=n;
    for(int i=size-1; size!=0&&arr[parent(i)]>arr[i];){
      swap(arr[i], arr[parent(i)]);
      i = parent(i);
    }
  }
};

int main(){
  Heap h(17);
  h.Insert(116);
  h.Insert(195);
  return 0;
}
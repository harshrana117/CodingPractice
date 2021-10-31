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
    //initially size is 0 in class so incresing size thrn inserting
    size++;
    arr[size-1]=n;
    for(int i=size-1; size!=0&&arr[parent(i)]>arr[i];){
      swap(arr[i], arr[parent(i)]);
      i = parent(i);
    }
  }

  void Heapify(int i){
    //Recursive approach
    int lt = left(i); int rt=right(i);
    int smallest = i;
    if(lt<size && lt<smallest){
      smallest=lt;
    }
    if(rt<size && arr[rt]< arr[smallest]){
      smallest=rt;
    }
    if(smallest !=i){
      swap(arr[smallest], arr[i]);

      Heapify(smallest);
      //argument is smallest => i will be replaced by smallest in next call
    }
    // Iterative approach
    // if(smallest!=i){
    //   for(int j=i; j<size&&arr[j]<arr[smallest];){
    //   if(lt<size && lt<smallest){
    //   smallest=lt;
    //   }
    //   if(rt<size && arr[rt]< arr[smallest]){
    //     smallest=rt;
    //   }
    //   swap(arr[j], arr[smallest]);
    //   j = smallest;

    // }
    // }
    
  };
  int ExtractMin(){
    if(size<=0){
      return INT_MAX;
    }
    if(size==1){
      size--;
      return arr[0];
    }
    swap(arr[0], arr[size-1]);
    size--;
    //Swapping then reducing size then calling Heapify function
    Heapify(0);
    return arr[size]; 
    //We have done size-- before therefore it
    //will return the minimum element i.e. extract min
  }

};

int main(){
    Heap h(11);
    h.Insert(3); 
    h.Insert(2);
    h.Insert(15);
    h.Insert(20);
    cout << h.ExtractMin() << " ";
    return 0;
}
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//Cycle Sort

void cycleSort(int arr[], int n) {
  //cs = current start
  for(int cs=0; cs<n-1; cs++){
    int item = arr[cs];
    int pos = cs;
    for(int i = cs+1; i<n; i++){
      if(arr[i]<item)
        pos++;
    }
    swap(item, arr[pos]);
    while(pos!=cs){
      pos = cs;
      for(int i=cs+1; i<n; i++){
        if(arr[i]<item){
          pos++;
        }
      }
      swap(item, arr[pos]);
    }
  }
}

int main() {
  int arr[] = { 20, 40,10,50,90,70,30}, n=7;
  cycleSort(arr, n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
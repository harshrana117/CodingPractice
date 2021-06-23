#include <iostream>
#include <cmath>
using namespace std;

//Bubble Sort

//Primitive 
void bubbleSort(int arr[], int n) {
  for(int i=0; i<n-1;i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);        
      }
    }
  }
}

//Efficient Code

void bubbleSortE(int arr[], int n){
  for(int i=0; i<n-1; i++){
    bool swapped = false;
    for(int j=0; j<n-i-1; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        swapped = true;
      }
    }
    if (swapped == false)
      break;
  }
}


int main() {
  int arr[] = {4,2,7,4,9,10,2}, n=7;
  int arr2[] = {3,4,5,6,1,2,3,4,8,9,10}, n2 = 11;
  bubbleSort( arr, n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  bubbleSortE(arr2, n2);
  for(int i=0; i<n2; i++){
    cout<<arr2[i]<<" ";
  }
  return 0;
}
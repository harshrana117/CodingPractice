#include <iostream>
#include <cmath>
using namespace std;

//Selection Sort: O(n^2) worst case, Not Stable algorithm

void selectionSort(int arr[], int n){
  for(int i=0; i<n; i++){
    int min_ind = i;
    for( int j = i+1; j< n; j++){
      if(arr[j]<arr[min_ind]){
        min_ind = j;
      }
    }
    //swap outside 2nd for loop
  swap(arr[i], arr[min_ind]);
  }
}




int main() {
  int arr[] = {4,2,7,4,9,10,2}, n=7;
  int arr2[] = {3,4,5,6,1,2,3,4,8,9,10}, n2 = 11;
  selectionSort( arr, n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  selectionSort(arr2, n2);
  for(int i=0; i<n2; i++){
    cout<<arr2[i]<<" ";
  }
  return 0;
}
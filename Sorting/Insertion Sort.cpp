#include <iostream>
#include <cmath>
using namespace std;

//Insertion Sort: O(n^2) worst case, Stable algorithm, O(n) best case

void insertionSort(int arr[], int n){
  for(int i=0; i<n; i++){
    int key = arr[i];
    int j = i-1;
    //Condition for going into while loop
    while(arr[j]> arr[i] && j>=0){
      arr[j+1] = arr[j]; //Shifting elements
      j--;
    }
    arr[j+1] = key;
  }
}




int main() {
  int arr[] = {4,2,7,4,9,10,2}, n=7;
  int arr2[] = {3,4,5,6,1,2,3,4,8,9,10}, n2 = 11;
  insertionSort( arr, n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  insertionSort(arr2, n2);
  for(int i=0; i<n2; i++){
    cout<<arr2[i]<<" ";
  }
  return 0;
}git 
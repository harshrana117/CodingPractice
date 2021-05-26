#include <iostream>
#include <cmath>
using namespace std;

//REVERSING ARRAY

void reverse(int arr[], int n){
  int low=0, high=n-1;
  while(low<high){
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    low++;
    high--;
  }
}

int main() {
  int arr[] = {10, 5,7, 30, 20, 9, 21, 24}, n=8;

  cout<<"Before Reverse" << endl;
  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<< "After Reverse"<<endl;
  reverse(arr, n);

  for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
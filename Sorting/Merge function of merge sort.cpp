#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


//Merge Sort: Stable algorithm

//Sort array which is sorted from index (low to mid) and (mid+1 to high)
//Time: O(n)
//Aux Space: O(n)

void merge(int arr[], int low, int mid, int high, int n){
  int n1=mid-low+1, n2 =high-mid;
  int left[n1], right[n2];
  for(int i=0; i<n1; i++){ left[i]=arr[low+i];};
  for(int i=0; i<n2; i++){
    right[i] = arr[mid+i+1];
  }
  int i=0,j=0,k=0;
  while(i<n1 && j<n2){
    if(left[i]<=right[i]){
      arr[k] = left[i];
      i++;k++;
    } else{
      arr[k] = right[j];
      j++;k++;
    }
  }
  while(i<n1){
    arr[k] = left[i];
    i++;k++;
  }
  while(j<n2){
    arr[k] = right[j]; j++; k++;
  }
}

int main() {
  int arr[] = { 4,5,6,7,1,2,3,4}, n=8;
  merge(arr,0, 3,7,n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
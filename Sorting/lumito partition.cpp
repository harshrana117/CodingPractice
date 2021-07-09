#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int LumitoPartition(int arr[], int n, int h){
  //h is pivot index about which we have to arrange elements of array
  int pivot = arr[h];
  int i=-1;
  for(int j=0; j<n-1;j++){
    if(arr[j]<pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  int temp = arr[i+1];
  arr[i+1] = pivot;
  arr[h] = temp;

  // cout<<(i+1)<<endl;
  // cout<<arr[i+1]<<" "<<pivot<<endl;
  // swap(arr[i+1], pivot);
  return (i+1);
}




int main() {
  int arr1[] = {10,80,30,90,40,50,70},n=7;
  LumitoPartition(arr1,n,n-2);
  for(int x: arr1)
	    cout<<x<<" ";
}
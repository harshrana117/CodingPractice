#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int partitionLomuto(int arr[], int l, int h){
  int pivot = arr[h];
  int i =l-1;
  for(int j=l; j<=h-1;j++){
    if(arr[j]<pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[h]);
  //returns pivot index
  return i+1;
}

void qSort(int arr[], int l, int h){
  if(l<h){
    //storing pivot index
    int p=partitionLomuto(arr,l,h);
    qSort(arr,l,p-1);
    qSort(arr,p+1,h);
  }
}


int main() {
  int arr[] = {8,4,5,2,10,15,17,13,4,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<n<<endl;
  qSort(arr,0,n-1);

  for(int x: arr)
    cout<<x<<" ";
}

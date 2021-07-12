#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int partitionHoare(int arr[], int l, int h){
  int pivot = arr[l];
  int i=l-1, j=h+1;

  while(true){
    do{
      i++;
    } while(arr[i]<pivot);
    do {
      j--;
    } while (arr[j]>pivot);
    if (i>=j) return j;
    swap(arr[i],arr[j]);
  }
}

void qSort(int arr[], int l, int h){
  if(l<h){
    //storing pivot index
    int p=partitionHoare(arr,l,h);
    //calling qSort till p since in Hoare sort pivot is not in middle(correct position)
    qSort(arr,l,p);
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
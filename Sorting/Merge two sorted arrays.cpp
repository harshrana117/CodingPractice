#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


//Merge Sort: Stable algorithm

//Merge two unsorted arrays 
//Naive approach => create a 3rd array with size of a+b => add elements from a and b => Use sort function.
//Time: O((m+n)*log(m+n))
//Aux Space: O(m+n)

void mergeSortNaive(int a[], int b[], int m, int n){
  int arr[m+n];
  for(int i=0; i<m; i++){
    arr[i] = a[i];
  }
  for(int j=0; j<n; j++){
    arr[m+j] = b[j];
  }
  sort(arr, arr+m+n);

  for(int i=0; i<m+n;i++){
    cout<<arr[i]<<" ";
  }
}

//Merge two sorted arrays with O(1) space
void mergeSortEff(int a[], int b[], int m, int n){
  int i=0, j=0;
  while(i<m && j<n){
    if(a[i]<b[j]){
      cout<<a[i]<<" "; i++;
    } else {
      cout<<b[j]<<" ", j++;
    }
  }
  while(i<m){ cout<< a[i]<< " "; i++;};
  while(j<n){ cout<<b[j]<<" "; j++;};
}


int main() {
  int arr[] = {4,2,7,4,9,10,2}, n=7;
  int arr2[] = {3,4,5,6,1,2,3,4,8,9,10}, n2 = 11;
  int arr3[] = { 2,4,6,8}, n3=4;
  int arr4[] = {1,1,3,5,7,9}, n4=6;
  mergeSortNaive(arr, arr2, n, n2);
  cout<<endl;
  mergeSortEff(arr3, arr4, n3, n4);
  return 0;
}
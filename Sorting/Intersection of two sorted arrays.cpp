#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


//Intersection of arrays: Two arrays as input and prints common elements

//Efficient Solution Time: O(n+m)
//a[] = { 2,3,4,5,6,7,8}, b[] = {2,3,4,5}
// o/p = { 2,3,4,5}

void intersection(int arr1[], int arr2[], int n, int m){
  int i=0, j=0;
  while(i<n && j<m){
    if(arr1[i] == arr2[j]){
      cout<<arr1[i]<<" ";
      i++;j++;
    } 
    else if(arr1[i]< arr2[j]) {
      i++;
    } else {
      j++;
    }
  }
}


int main() {
  int arr1[] = {1,1,2,3,4,7}, arr2[] = {1}, n=6,m=1;
  intersection(arr1,arr2,n,m);
}
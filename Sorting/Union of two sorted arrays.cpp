#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


//Union of two sorted arrays: Two arrays as input and prints distinct elements from both the arrays.

//Naive SOlution: 
// Copy arr a nd b into 3rd array => sort(using sort function) => print unique elements
//Time: O(m+n)*log(m+n) Aux Space: O(m+n)

//Efficient Solution: Time O(m+n) Space: (1)
void Union(int arr1[], int arr2[], int n, int m){
  int i=0, j=0;
  while(i<n && j<m){
    if(i>0 && arr1[i] == arr1[i-1]){ i++;};
    if(j>0 && arr2[j] == arr2[j-1]){ j++;};
    if(arr1[i] == arr2[j]){
      cout<<arr1[i]<<" ";
      i++,j++;
    } else if(arr1[i] < arr2[j]){
      cout<<arr1[i]<<" ";
      i++;
    } else {
      cout<<arr2[j]<<" ";
      j++;
    };
  }
  while(i<n){
    if(i>0 && arr1[i] != arr1[i-1]){
      cout<<arr1[i]<<" ", i++;
    }
  }
  while(j<m){
    if(j>0 && arr2[j] != arr2[j-1]){
      cout<<arr2[j]<<" ", j++;
    }
  }
}

int main() {
  int arr1[] = {1,1,2,3,4,7}, arr2[] = {1,8,9}, n=6,m=3;
  Union(arr1,arr2,n,m);
}
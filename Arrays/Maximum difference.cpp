#include <iostream>
#include <cmath>
using namespace std;

//Maximum difference: To find maximum of arr[j] - arr[i] j>i

//Naive Solution
//Using two for loops;

//Efficient Solution

int maxDiff(int arr[], int n){
  int res=arr[1]-arr[0], minVal=arr[0];
  for(int j=1; j<n; j++){
    res=max(res, arr[j]-minVal);
    minVal=min(minVal, arr[j]);
  }
  return res;
}

int main() {
  int arr[] = {1,2,3,4,5}, n=5;
  int a = maxDiff(arr, n);
  cout<<"Max Difference: "<<a;
}
#include <iostream>
#include <cmath>
using namespace std;

//Max subarray sum
//arr = {1,2,3,-2} 

//Naive approach

int maxSubarraySum(int arr[], int n){
  int res=arr[0];
  for(int i=0; i<n; i++){
    int curr = 0;
    for(int j=i; j<n; j++){
      curr = curr + arr[j];
      res = max(res, curr);

    }
  }
  return res;
}

//Efficent approach

int maxSubarraySumE(int arr[], int n){
  int maxEnding = arr[0];
  int res = arr[0];
  for(int i=1; i<n; i++){
    maxEnding =  max(maxEnding + arr[i], arr[i]);
    //res checks for overall greater value while maxEnding checks for max at each element as loop progresses
    res = max(res, maxEnding);
  }
  return res;
}

//Dry run for efficient approach

//arr = {-3,8,-2}
// i=1: maxEnding = max(-3+8, 8) = 8,  res = 8
// i=2: maxEnding = max(8-2, -2) = 6,  res = 8

int main() {
  int arr[] = {1,2,3,-1,5,-3}, n=6;
  cout<<maxSubarraySum(arr, n)<<endl;
  cout<<maxSubarraySumE(arr, n)<<endl;
  
}
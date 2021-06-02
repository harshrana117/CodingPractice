#include <iostream>
#include <cmath>
using namespace std;

//Longest Odd even alternate subarray length

//Naive approach

int maxEvenOdd(int arr[], int n){
  int res =1;
  for(int i=0; i<n; i++){
    int curr =1;
    for(int j=i+1; j<n; j++){
      //checking for alternation
      if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0)){
        curr++;
        res = max(curr, res);
    }
  }
}
return res;
}

//Efficient Approach: using Kadane's algorithm
// Time O(n)
int maxEvenOddE(int arr[], int n) {
  int res = 1;
  int curr = 1;
  for(int i=1; i<n; i++){
    if((arr[i-1]%2==0&&arr[i]%2!=0)||
    (arr[i-1]%2!=0&&arr[i]%2==0)){
      curr++;
      res = max(res, curr);
    }
    else curr =1;
  }
  return res;
}

int main() {
  int arr[] = {1,2,3,4,-5,2,1,1}, n=7;
  cout<<endl<<maxEvenOdd(arr, n)<<endl;
  cout<<endl<<maxEvenOddE(arr, n)<<endl;
}
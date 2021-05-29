#include <iostream>
#include <cmath>
using namespace std;

//Max consecutive 1

//Naive approach: Using two for loops O(n^2): time

//Efficient Approach O(n): time

int maxConOne(int arr[], int n){
  int count = 0;
  int res= 0;
  for(int i=0; i<n; i++){
    if(arr[i] == 0){
      count = 0;
    } else {
      count++;
      res = max(res, count);
    }

  }
  return res;
}

int main () {
  int arr[] = { 0,0,0,0,1,1,1,1,0,1,0,1},n=12;
  int result = maxConOne(arr, n);
  cout<<endl<<result;

}
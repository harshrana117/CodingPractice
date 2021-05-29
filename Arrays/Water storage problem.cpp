#include <iostream>
#include <cmath>
using namespace std;

//Storing water problem

//Naive solution
//Time: O(n^2) Space: O(1)
int getWater(int arr[], int n){
  int res=0;
  for(int i=0; i<n-1; i++){
    int lmax=arr[i];
    for(int j=0; j<i; j++){
      lmax=max(lmax, arr[j]);
    }
    int rmax=arr[i];
    for(int j=i+1; j<n; j++){
      rmax=max(rmax, arr[j]);
    }
    res += min(lmax,rmax) - arr[i];
  }
  return res;
}

//Efficient solution
//Time: O(n) Space: O(n)

int getWaterE(int arr[], int n){
  int res=0;
  int lMax[n], rMax[n];
  lMax[0] =arr[0];
  for (int i=1; i<n; i++){
    lMax[i] = max(arr[i], lMax[i-1]);
  }
  rMax[n-1]= arr[n-1];
  for(int i=n-2; i>=0; i--){
    rMax[i] = max(arr[i], rMax[i+1]);
  }
  for(int i=1; i<n-1; i++){
    res += (min(rMax[i], lMax[i]) - arr[i]);
  }
  return res;
}

int main(){
  int arr[] = {9,2,3,12,9,10,1,10}, n=8;
  int result = getWater(arr, n);
  int result2 = getWaterE(arr, n);
  cout<<result<<endl<<result2<<endl;
}
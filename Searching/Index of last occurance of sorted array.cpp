#include <iostream>
#include <cmath>
using namespace std;

//Index of last Occurance of an element in sorted array

//Naive solution
int first(int arr[], int n, int x){
  for(int i = 0; i<n; i++){
    if(arr[i] == x && arr[i+1]!=x) return i;
  }
  //OR can traverse the array from left side and return for first occurance
  return -1;
}

//Efficient solution Iterative
int firstE(int arr[], int n, int x){
  int high = n-1;
  int low = 0;

  while(low <= high){
  int mid = (low+high)/2;

  if(arr[mid]<x) low=mid+1;

  else if(arr[mid] == x) {
    // while(arr[mid] == x) 
    // {mid--;}
    if(mid ==0 || arr[mid+1]!=x){
      return mid;
    }else{
      low = mid+1;
    }
    // return mid;
  }
  else {
    high = mid-1;
  }
   }
  return -1;
}

//Recursive approach
int firstER(int arr[], int high, int low, int x){
  if(low>high){ return -1;}
  int mid = (low + high)/2;
  if(x>arr[mid]){
    return firstER(arr, high, mid+1, x);
  } 
  else if(x==arr[mid]){
    if (mid==0 || arr[mid]!=arr[mid+1])
    return mid;
    else return firstER(arr, high, mid+1,x);
  }
  else{
    return firstER(arr, mid-1, low, x);
  }
  return -1;
}


int main() {
int arr[] = {1,1,1,2,2,5,5,7,7,8}, n=10;
int arr2[] = {1,4,5}, n2=3;
cout<<first(arr, n, 2)<<endl;
cout<<firstE(arr,n, 8)<<endl;
cout<<firstER(arr,n,0,8)<<endl;
}
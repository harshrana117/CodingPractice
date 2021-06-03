#include <iostream>
#include <cmath>
using namespace std;

//Binary Search 
//Time complexity of successful search O(logn)
//Time complexity of unsuccessful search theta(logn)


//Iterative approach
//time O(log N) space: O(1)
int binSearchItr(int arr[], int n, int x){
  int high = n-1;
  int low = 0;
  

  while(low <= high){
    int mid = (low+high)/2;
    if(arr[mid]<x){
      low = mid+1;
    }
    if (arr[mid] == x){
      return mid;
    }
    if (arr[mid]>x){
      high = mid-1;
    }
  }
  return -1;
}

//Recursive approach
// time: O(log N) space: O(logn)

int binSearchRecursive(int arr[], int x, int high, int low){
  
    if(low > high) return -1;
    int mid = (low+high)/2;

    if(arr[mid] == x){
      return mid;
    }
    else if (arr[mid]>x)
    {
      return binSearchRecursive(arr, x,mid-1, low);
    }
    else{
      return binSearchRecursive(arr, x, high, mid+1);
    }
  }

int main() {
  int arr[] = { 2,4,5,6,8,9,15,19}, n=8;
  cout<<binSearchItr(arr, n, 9)<<endl;
  cout<<binSearchRecursive(arr,15,7,0)<<endl;
  
}
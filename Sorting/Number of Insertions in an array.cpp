#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


//Count of inversions in an array
//Inversion is if larger element appears before smaller element
//EX: a[] = { 1,2,5,3,7,4} number of inversion = 3 ((5,3), (5,4), (7,4))

//Naive approach
//Time: O(n^2)
int countInversionsNaive(int arr[], int n){
  int res=0;
  for(int i=0; i<n;i++){
    for(int j=i; j<n; j++){
      if(arr[i]>arr[j]){
        res++;
      }
    }
  }
  cout<<res<<endl;
  return res;
}

//Efficient Method
//Time: O(nlogn) Space: O(n)
int countAndMerge( int arr[], int l, int m, int r){
  //l starting, m middle, r last
  int n1=m-l+1, n2=r-m;
  int left[n1],right[n2];
  for(int i=0; i<n1; i++){
    left[i] = arr[i+l];
  }
  for(int j=0; j<n2; j++){
    right[j] = arr[m+1+j];
  }
  int res=0,i=0,j=0,k=l;
  while(i<n1 && j<n2){
    if(left[i]<=right[j]){
      arr[k]=left[i];
      i++,k++;
    } else {
      arr[k]=right[j];
      k++,j++;
      res=res+(n1-i);
    }
  }
  while(i<n1){
    arr[k] = left[i];
    k++,i++;
  }
  while(j<n2){
    arr[k] = right[j];
    k++,j++;
  }
  return res;
}

int countInvEff(int arr[], int l ,int r){
  int res=0;
  if(l<r){
    int m=(r+l)/2;

    res+= countInvEff(arr, l,m);
    res += countInvEff(arr,  m+1, r);
    res+= countAndMerge(arr, l , m ,r);
  }
  return res;
}



int main() {
  int arr1[] = {10,80,30,90,40,50,70},n=7;
  countInversionsNaive(arr1,n);
  for(int x: arr1)
	    cout<<x<<" ";
  cout<<endl;
  cout<<countInvEff(arr1,0,n-1);
}